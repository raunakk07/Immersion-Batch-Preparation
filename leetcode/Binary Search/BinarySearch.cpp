class Solution {
public:
    int bs(vector<int>&nums , int s , int e , int target){
        if(s>e){
            return -1;
        }
        int mid = (s+e)/2;
        if(nums[mid] == target){
            return mid;
        }else if(nums[mid] > target){
            return bs(nums,s,mid-1,target);
        }else{
            return bs(nums,mid+1,e,target);
        }
    }


    int search(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        return bs(nums,0,nums.size()-1 , target);
    }
};
