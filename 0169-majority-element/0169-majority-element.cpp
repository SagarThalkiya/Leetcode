#include <unordered_map>
#include <vector>
using namespace std;

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int, int> mp;
        int n = nums.size();
        
        // Count the occurrences of each element
        // for(int num : nums){
        //     mp[num]++;
        // }
        for (int i = 0 ;i<n ;i++) {
            mp[nums[i]]++;
        }
        
        // Find the element that appears more than n / 2 times
        for (auto it : mp) {
            if (it.second > n / 2) {
                return it.first;
            }
        }
        
        return -1; // This line will never be reached if input guarantees a majority element
    }
};
