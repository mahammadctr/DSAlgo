class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int ans=0,n=nums.size();
        for(int i=0;i<n;i++){
            ans=ans^nums[i];
        }
        return ans;
    }
};