class Solution {
public:
    string frequencySort(string s) {
        string result ="";
        map<char , int> mp;
        for(auto it : s){
            mp[it]++;
        }
        vector<pair<int , char>> freq;
        for(auto it : mp){
             freq.push_back({it.second, it.first});
        }
        sort(freq.rbegin(),freq.rend());
        for (auto& it : freq) {
            result += string(it.first, it.second);  // Append the character it.second it.first times
        }
        return result;
        
    }
};