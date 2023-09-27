int upperBound(vector<int> &arr, int x, int n){
	int start =0;
	int end =n-1;
	int answer =n;
	while(start<=end){
		int middle = (start+end)/2;
		if(arr[middle]>x){
			answer = middle;

			end = middle-1;
		}else{
			start = middle+1;
		}
	}return answer;	
}
