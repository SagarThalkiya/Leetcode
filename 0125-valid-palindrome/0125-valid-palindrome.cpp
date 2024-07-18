
class Solution {
public:
    bool isPalindrome(string s) {
        string filteredString = preprocessString(s);
        return checkPalindrome(filteredString, 0);
    }

private: // keep it private it good practise
    string preprocessString(const string& s) { // making string const will not allow for modification of string externally through proccess
        string result;
        for (char c : s) {
            if (isalnum(c)) {  // add only alphanumeric characters 
                result += tolower(c); // converts to lower case
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