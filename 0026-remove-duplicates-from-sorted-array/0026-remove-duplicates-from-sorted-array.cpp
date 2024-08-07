class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        set<int> x(nums.begin(), nums.end());
        nums.assign(x.begin(), x.end());
        return nums.size();
    }
};
