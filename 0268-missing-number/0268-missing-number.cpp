class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int xor1 = 0 ,xor2=0;
        int n = nums.size();
      //  sort(nums.begin(),nums.end());
        for(int i =0;i<n;i++){
            xor2 = xor2 ^ nums[i];
            xor1 = xor1 ^ i+1;
            
        }
      //  xor1 = xor1 ^ n;
        
        return (xor1  ^ xor2);
    }
};