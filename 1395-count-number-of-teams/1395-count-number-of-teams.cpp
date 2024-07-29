// class Solution {
// public:
//     int numTeams(vector<int>& rating) {
//         int cnt = 0;
//         int n = rating.size();
//         for(int i = 0; i < n - 2; ++i) {
//             for(int j = i + 1; j < n - 1; ++j) {
//                 for(int k = j + 1; k < n; ++k) {
//                     if ((rating[i] < rating[j] && rating[j] < rating[k]) || 
//                         (rating[i] > rating[j] && rating[j] > rating[k])) {
//                         cnt++;
//                     }
//                 }
//             }
//         }
//         return cnt;
//     }
// };

class Solution {
public:
    int numTeams(vector<int>& rating) {
        int cnt = 0;
        int n = rating.size();
        
        for (int j = 1; j < n - 1; ++j) {
            int less_left = 0, greater_left = 0;
            int less_right = 0, greater_right = 0;
            
            for (int i = 0; i < j; ++i) {
                if (rating[i] < rating[j]) less_left++;
                if (rating[i] > rating[j]) greater_left++;
            }
            
            for (int k = j + 1; k < n; ++k) {
                if (rating[k] < rating[j]) less_right++;
                if (rating[k] > rating[j]) greater_right++;
            }
            
            cnt += less_left * greater_right + greater_left * less_right;
        }
        
        return cnt;
    }
};

