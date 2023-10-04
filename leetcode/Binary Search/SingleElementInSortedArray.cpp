/* question - You are given a sorted array consisting of only integers where every element appears exactly twice, except for one element which appears exactly once.

Return the single element that appears only once.

Your solution must run in O(log n) time and O(1) space.

 duplicated are stored in (even index , odd index) format and we choose which half to eliminate by seeing how middle element is begin disrupted*/

class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
      int n=nums.size();
        if(n==1)return nums[0];
        if(nums[0]!=nums[1])return nums[0];
        if(nums[n-1]!=nums[n-2])return nums[n-1];
        int start=1,end=n-2;
        while(start<=end){
            int mid=(start+end)/2;
            if(nums[mid]!=nums[mid-1] && nums[mid]!=nums[mid+1])return nums[mid];

            if((mid%2==1 && nums[mid]==nums[mid-1]) || (mid%2==0 && nums[mid]==nums[mid+1]) ){
                start=mid+1;
            }else{
                end=mid-1;
            }
        }
        return -1;
    }
};
