class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
       int count=0,n=nums.size();
       for(int i=0;i<n;i++){
        long long s=0;
        for(int j=i;j<n;j++){
            
           
                s=s+nums[j];
            
            if(s==k) count++;
        }
       } 
       return count;
    }
};