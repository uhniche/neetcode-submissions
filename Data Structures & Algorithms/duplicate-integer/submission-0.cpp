class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        std::unordered_map <int,int> vals = {};

        for(unsigned int i =0; i<nums.size(); i++){
            if(vals.contains(nums[i])){
                return true;
            }

            vals.insert({nums[i], i});
        }

        return false;
    }
};