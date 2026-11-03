class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        for(int i = 0; i<nums.size(); i++){
            int diff = target - nums[i];
            for(int j = i+1; i!=j && j<nums.size(); j++){
                if(nums[j] == diff){
                    return {i,j};
                }
            }
        }

        return{0,0};
    }
};
