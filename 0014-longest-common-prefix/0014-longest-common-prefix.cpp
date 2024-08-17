class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        // If the input vector is empty, return an empty string as there's no common prefix
        if (strs.size() == 0) return "";

        // Initialize the prefix as the first string in the vector
        string prefix = strs[0];

        // Iterate through the remaining strings in the vector
        for (int i = 1; i < strs.size(); i++) {
            // While the current string does not start with the current prefix
            while (strs[i].find(prefix) != 0) {
                // Reduce the prefix by removing the last character
                prefix = prefix.substr(0, prefix.length() - 1);

                // If the prefix becomes empty, return an empty string
                // This means there's no common prefix among the strings
                if (prefix.empty()) return "";
            }
        }

        // Return the longest common prefix found
        return prefix;
    }
};
