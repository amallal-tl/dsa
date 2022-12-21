//https://leetcode.com/problems/two-sum/
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> solutions;
        for (int i = 0; i < nums.size(); i++) {
            int remainder = target; 
            for(int j = i; j < nums.size(); j++){
               remainder = remainder - nums[j];
               solutions.push_back(j);
               if(remainder == 0){
                   return solutions;
               }
            }
            solutions.clear();  
        }
        return solutions;
    }
};