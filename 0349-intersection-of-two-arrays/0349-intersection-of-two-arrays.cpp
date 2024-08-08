class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        set<int> x;
        for(int i=0;i<nums1.size();i++){
            if(find(nums2.begin(), nums2.end(), nums1[i]) != nums2.end()){
                x.insert(nums1[i]);
            }
        }
        return vector<int>(x.begin(), x.end());
    }
};
