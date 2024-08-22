#include <bits/stdc++.h>

class Solution {
public:
    int myAtoi(std::string s) {
        int i = 0, sign = 1;
        long long result = 0;

        // Skip leading whitespace
        while (i < s.length() && s[i] == ' ') {
            i++;
        }

        // Check for sign
        if (i < s.length() && (s[i] == '-' || s[i] == '+')) {
            sign = (s[i] == '-') ? -1 : 1;
            i++;
        }

        // Convert digits to integer
        while (i < s.length() && std::isdigit(s[i])) {
            result = result * 10 + (s[i] - '0');

            // Handle overflow/underflow
            if (result * sign >= INT_MAX) return INT_MAX;
            if (result * sign <= INT_MIN) return INT_MIN;

            i++;
        }

            return sign * result;
    }
};
