class Solution {
public:
    int secondHighest(string s) {
        set<int> x;
        for(char c : s) {
            if(isdigit(c)) {
                x.insert(c - '0');
            }
        }
        if(x.size() < 2) return -1;
        auto it = x.rbegin();
        ++it;
        return *it;
    }
};
