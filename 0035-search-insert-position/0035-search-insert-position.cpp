class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int n=nums.size();
        int low=0,high=n-1;
        for( ; low<=high;){
          int  mid=(low+high)/2;
           if(target==nums[mid]){
           return mid;}
           else if(nums[mid] > target){
             high=mid -1;
             }
        else {
            low=mid+1;}
            }
        
        return low;
    }
};