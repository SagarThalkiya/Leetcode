#include <vector>
#include <algorithm> // for std::max

class Solution {
public:
    int minSwaps(std::vector<int>& nums) {
        int totalOne = 0;

        // Calculate the total number of 1s in the array
        for (int i : nums) {
            totalOne += i;
        }

        int i = 0;
        int j = 0;
        int curr = 0;
        int maxC = 0;

        int n = nums.size();

        // Sliding window approach with the window size of totalOne
        while (j < 2 * n) {
            if (nums[j % n] == 1) {
                curr++;
            }

            if (j - i + 1 > totalOne) {
                curr -= nums[i % n];
                i++;
            }

            maxC = std::max(curr, maxC);
            j++;
        }

        return totalOne - maxC;
    }
};
