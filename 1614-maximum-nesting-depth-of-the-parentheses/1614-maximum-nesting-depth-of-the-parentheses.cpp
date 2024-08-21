#include<bits/stdc++.h>

class Solution {
public:
    int maxDepth(string s) {
        int maxi = 0;
        int cnt = 0;
        int a = s.length();
        for(int i = 0; i<a; i++){
                
            if(s[i] == '('){
                    cnt++;
                    maxi = max(maxi,cnt);
            }
            else if(s[i] == ')'){
                  cnt--;
            }

        }
        return maxi;
    }
};