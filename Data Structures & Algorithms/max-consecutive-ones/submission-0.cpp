class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
       int to_return = 0;
       int streak = 0;

       for(unsigned int i = 0; i<nums.size(); i++){
            if(nums[i] ==1){
                streak++;
            }else{
                if(streak>to_return){
                    to_return = streak;
                }
                streak =0;
            }
        }
        if(streak>to_return){
            to_return = streak;
        }
        return to_return;
    }
};