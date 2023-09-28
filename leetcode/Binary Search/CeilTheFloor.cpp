/* We're given an unsorted array A of N integers and an integer x
  We've to find floor and ceiling of 'X' in the array
  Floor of x is the largest element in the array which is smaller than or equal to 'x'
  Ceiling of x is the smallest element in the array which is greater then or eqyal to 'x'*/

int findCeil(int arr[], int n, int x){
	int start =0;
	int end = n-1;
	int answer =-1;
	while(start<=end){
		int mid = (start+end)/2;
		if(arr[mid]==x){
			answer = arr[mid];
			return answer;
			
		}if(arr[mid]>x){
			answer = arr[mid];
			end = mid - 1;
		}else{
			start= mid+1;
		}
	}return answer;
}
int findFloor(int arr[], int n, int x){
	int start =0;
	int end = n-1;
	int answer =-1;
	while(start<=end){
		int mid = (start+end)/2;
		if(arr[mid]==x){
			answer = arr[mid];
			return answer;
			
		}if(arr[mid]<x){
			answer = arr[mid];
			start = mid+1;
		}else{
			end = mid-1;
		}
	}return answer;
}

pair<int, int> getFloorAndCeil(int arr[], int n, int x) {
	sort(arr,arr+n);
	int c = findCeil(arr,n,x);
	int f = findFloor(arr,n,x);
	return make_pair(f,c);

}
