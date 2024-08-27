class Solution {
public:
    int mySqrt(int x) {
      int ans=0;
      for(long long i=1;i<=x;i++){
    long long val=i*i;
    if(val<=x*1ll){
        ans=i;
    }
    else {
        break;
    }
      } 
      return ans; 
    }
};