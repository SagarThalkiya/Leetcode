
class Solution {
public:
    bool isPalindrome(string s) {
        string filteredString = preprocessString(s);
        return checkPalindrome(filteredString, 0);
    }

private:
    string preprocessString(const string& s) {
        string result;
        for (char c : s) {
            if (isalnum(c)) {
                result += tolower(c);
            }
        }
        return result;
    }

    bool checkPalindrome(const string& s, int i) {
        if (i >= s.size() / 2) {
            return true;
        }
        if (s[i] != s[s.size() - i - 1]) {
            return false;
        }
        return checkPalindrome(s, i + 1);
    }
};