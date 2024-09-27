class Solution {
public:
    int myAtoi(string s) {
        int si = 0, i = 0, sign = 1;
        

        while (i < s.size() && s[i] == ' ') {
            i++;
        }

        if (i < s.size() && (s[i] == '-' || s[i] == '+')) {
            sign = (s[i] == '-') ? -1 : 1;
            i++;
        }

        while (i < s.size() && s[i] >= '0' && s[i] <= '9') {
            int digit = s[i] - '0';

            if (si > (INT_MAX - digit) / 10) {
                return (sign == 1) ? INT_MAX : INT_MIN;
            }

            si = si * 10 + digit;
            i++;
        }

        return si * sign;
    }
};
