class Solution {
public:
    bool isIsomorphic(string s, string t) {
        // Create two unordered_maps to store the mappings between characters in s and t
        unordered_map<char, char> mp1;
        unordered_map<char, char> mp2;

        // Get the length of the strings
        int m = s.length();

        // Iterate through each character in the strings
        for (int i = 0; i < m; i++) {
            char ch1 = s[i];  // Current character from string s
            char ch2 = t[i];  // Current character from string t

            // Check if the character ch1 from s is already mapped to a different character in t
            if (mp1.find(ch1) != mp1.end() && mp1[ch1] != ch2 ||
                // Check if the character ch2 from t is already mapped to a different character in s
                mp2.find(ch2) != mp2.end() && mp2[ch2] != ch1) {
                return false;  // If any mapping condition fails, the strings are not isomorphic
            }

            // Create/update the mapping from ch1 in s to ch2 in t
            mp1[ch1] = ch2;
            // Create/update the mapping from ch2 in t to ch1 in s
            mp2[ch2] = ch1;
        }

        // If all characters map correctly, return true indicating the strings are isomorphic
        return true;
    }
};
