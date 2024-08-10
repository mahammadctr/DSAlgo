class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int count = 0, sum = 0;
        unordered_map<int, int> prefixSum;
        prefixSum[0] = 1;
        
        for(int i = 0; i < nums.size(); i++) {
            sum += nums[i];
            if(prefixSum.find(sum - k) != prefixSum.end()) {
                count += prefixSum[sum - k];
            }
            prefixSum[sum]++;
        }
        
        return count;
    }
};
