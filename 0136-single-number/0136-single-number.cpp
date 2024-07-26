class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int n = nums.size();
        int ans =0;
        sort(nums.begin(),nums.end());
        for(int i =0;i<n;i++){
            ans = ans ^ nums[i];
        }
        
        
        
        
        
//         map<int,int> mpp;
//         for(int i =0;i<n;i++){

//           mpp[nums[i]]++;
//         }
        
//         for(auto it : mpp){

//             if(it.second < 2){
//                 return it.first;
//             }
//         }
        
        return ans;
    }  
};