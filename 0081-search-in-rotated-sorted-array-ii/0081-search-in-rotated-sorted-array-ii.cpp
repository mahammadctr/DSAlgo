class Solution {
public:
    bool search(vector<int>& nums, int target) {
  bool t=false;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==target){
                 t=true;
            }
        }
        return t;
    }
};