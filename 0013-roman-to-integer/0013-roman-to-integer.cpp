#include<bits/stdc++.h>
class Solution {
public:
       int romanToInt(string s) {
        int result = 0;
        int a = s.length();
        
        for (int i = 0; i < a; i++) {
            // Get the value of the current Roman numeral
            int currentVal = getValue(s[i]);

            // Check if the next numeral is larger, indicating a subtraction scenario
            if (i + 1 < a && currentVal < getValue(s[i + 1])) {
                result -= currentVal;
            } else {
                result += currentVal;
            }
        }
        
        return result;
    }
    
    private:
    // Helper function to get the integer value of a Roman numeral
    int getValue(char c) {
        switch (c) {
            case 'M': return 1000;
            case 'D': return 500;
            case 'C': return 100;
            case 'L': return 50;
            case 'X': return 10;
            case 'V': return 5;
            case 'I': return 1;
            default: return 0; // Just as a fallback; shouldn't happen with valid input
        }
    }
};