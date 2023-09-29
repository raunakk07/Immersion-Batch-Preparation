/*We're given an array of length n and an integer x.
  we're supposed to find how many times x occurs in the array in O(logn) times
  that means we can't just use linear serch*/


int firstOccurence(vector<int>& arr, int n, int x){
	int start =0;
	int end = n-1;
	int first = -1;
	while(start<=end){
		int mid = (start+end)/2;
		if(arr[mid] == x){
			first =mid;

			end = mid-1;
		}else if(arr[mid]<x){
			start = mid+1;
		}else{
			end =mid -1;
		}
	}return first;
}
int LastOccurence(vector<int>& arr, int n, int x){
	int start =0;
	int end = n-1;
	int last = -1;
	while(start<=end){
		int mid = (start+end)/2;
		if(arr[mid] == x){
			last =mid;

			start = mid+1;
		}else if (arr[mid] < x) {
            start = mid + 1; // look on the right
        }
        else {
            end = mid - 1; // look on the left
        }
	}return last;
}
pair<int,int> firstAndLastPosition(vector<int>& arr, int n, int x){
	int first = firstOccurence(arr, n, x);
	if(first == -1) return{-1,-1};
	int last = LastOccurence(arr, n, x);
	return {first,last};
}


int count(vector<int>& arr, int n, int x) {
	pair<int, int> ans = firstAndLastPosition(arr, n, x);
    if (ans.first == -1) return 0;
    return (ans.second - ans.first + 1);
}
