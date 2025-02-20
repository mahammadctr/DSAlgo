class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
       unordered_set<int> arr(nums.begin(),nums.end());
       vector<int> ans;
       for(int i=1;i<=nums.size();i++){
        if(arr.find(i)==arr.end()) ans.push_back(i);
        
       } 
       return ans;
    }
    
};