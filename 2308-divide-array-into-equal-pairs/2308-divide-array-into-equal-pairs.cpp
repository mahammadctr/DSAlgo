class Solution {
public:
    bool divideArray(vector<int>& nums) {
       map<int,int> mp;
       for(int num:nums){
           mp[num]++;
       } 
       for(auto it:mp){
        if(it.second % 2 !=0) return 0;
       
       }
       return 1;
    }
};