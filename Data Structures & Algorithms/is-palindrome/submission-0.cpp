
class Solution {
public:
    bool isPalindrome(string s) {
        unsigned int i = 0;
        unsigned int j= s.size() -1;

        while(i<j){
            if(!std::isalnum(s[i]) ){
                i++;
            }else if(!std::isalnum(s[j])){
                j--;
            }else if(std::tolower(s[i]) != std::tolower(s[j])){
                return false;
            }else{
                i++;
                j--;
            }
        }

        return true;
    }
};
