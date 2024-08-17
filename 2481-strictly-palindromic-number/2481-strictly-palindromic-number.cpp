
class Solution {
public:
    bool isStrictlyPalindromic(int n) {
        if (n < 4) return false;

        auto isPalindromic = [](string s) {
            int left = 0, right = s.size() - 1;
            while (left < right) {
                if (s[left] != s[right]) return false;
                ++left;
                --right;
            }
            return true;
        };

        for (int base = 2; base <= n - 2; ++base) {
            string representation = "";
            int temp = n;
            while (temp > 0) {
                int digit = temp % base;
                representation += (digit < 10 ? '0' + digit : 'a' + digit - 10);
                temp /= base;
            }
            reverse(representation.begin(), representation.end());
            if (!isPalindromic(representation)) return false;
        }

        return true;
    }
};
