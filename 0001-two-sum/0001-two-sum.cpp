class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        //takin size of the array
       int n = nums.size();

    //declaring vector since it is dynamic
    vector<int> temp ;

    //first loop welli run anothr loop n-1 times
    for(int i=0;i<n-1;i++){   
        //second loop will run until its over then agian first loop will start
        for(int j=i+1;j<n;j++){
            if(nums[i]+nums[j]==target){
                //stores index of numbers in vector
                temp.push_back(i);
                temp.push_back(j);
            }
        }
    }
    //displays the vector temp
    return temp;
       

}
};