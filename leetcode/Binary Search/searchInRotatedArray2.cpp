// Question = Same as previous but there can be duplicate elements present.
// therefore, we deal with it search can stop if the last and first element in an array equals same as mid ex = [3,1,2,3,3,3,3,3]
// and we search for 1 here, we increase the start index by one and decrease end index by one to continue with our seach as 3 is not out target

class Solution {
public:
    bool search(vector<int>& nums, int target) {
        int start =0;
        int end = nums.size()-1;
        while(start <= end){
            int mid = (start + end)/2;
            if(nums[mid] == target) return true;
            if((nums[start] == nums[mid] && nums[end] == nums[mid])){
                start++;
                end--;
            }
            else if(nums[start] <=nums[mid]){
                if(nums[start]<=target && nums[mid]>target){
                    end = mid - 1;
                }else start = mid + 1;
            }
            else{
                if(nums[mid]<target && nums[end]>=target){
                    start = mid + 1;
                }else end = mid - 1;
            }
        }
        return false;
        
    }
};
