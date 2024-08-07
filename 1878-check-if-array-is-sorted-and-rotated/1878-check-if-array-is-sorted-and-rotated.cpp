class Solution {
public:
    bool check(vector<int>& nums) {
        vector<int> sorted_nums = nums;
        sort(sorted_nums.begin(), sorted_nums.end());
        int n = nums.size();
        
        for (int i = 0; i < n; i++) {
            if (nums[i] == sorted_nums[0]) {
                vector<int> rotated_nums(nums.begin() + i, nums.end());
                rotated_nums.insert(rotated_nums.end(), nums.begin(), nums.begin() + i);
                if (rotated_nums == sorted_nums) {
                    return true;
                }
            }
        }
        return false;
    }
};
