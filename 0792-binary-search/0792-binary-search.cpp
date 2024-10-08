class Solution {
public:
    int search(vector<int>& nums, int target) {
        for(int low = 0, high = nums.size() - 1; low <= high;) {
            int mid = (low + high) / 2;
            if(nums[mid] == target) return mid;
            else if(nums[mid] > target) high = mid - 1;
            else low = mid + 1;
        }
        return -1;
    }
};
