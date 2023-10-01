class Solution {
public:
    int findMin(vector<int>& nums) {
        int start =0; 
        int end = nums.size()-1;
        int answer = nums[0];
        while(start<end){
            if(nums[start]<nums[end]) return nums[start]; // check if array is already sorted
            int mid =(start+end)/2;
            if(nums[start]<=nums[mid]){
                
                start = mid+1;   //find out unsorted part of array, minimum element will always be there
            }else{
                end = mid;
                
            }
        }return nums[start];  //beginning of unsorted array is the minimum element.
    }
};
