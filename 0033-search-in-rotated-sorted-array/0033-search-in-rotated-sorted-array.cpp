class Solution {
public:
    int search(vector<int>& nums, int target) {
        int index=-1,n=nums.size();
        for(int i=0;i<n;i++){
            if(nums[i]==target){
              index=i;

            }
        }
       
        return index;
    }
};