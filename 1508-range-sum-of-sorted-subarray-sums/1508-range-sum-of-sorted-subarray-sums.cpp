#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int rangeSum(vector<int>& nums, int n, int left, int right) {
        const int MOD = 1000000007;
        vector<int> subarraySums;
        
        // Generate all subarray sums
        for (int i = 0; i < n; ++i) {
            long long sum = 0;
            for (int j = i; j < n; ++j) {
                sum += nums[j];
                subarraySums.push_back(sum);
            }
        }
        
        // Sort the subarray sums
        sort(subarraySums.begin(), subarraySums.end());
        
        // Calculate the sum from index left to right (1-based index)
        long long result = 0;
        for (int i = left - 1; i < right; ++i) {
            result = (result + subarraySums[i]) % MOD;
        }
        
        return result;
    }
};
