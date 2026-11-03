class Solution {
public:
    bool isAnagram(string s, string t) {
        std::unordered_map<char, int> freq1 = {};
        std::unordered_map<char, int> freq2 = {};
        for(char c: s){
            freq1[c]++;
        }

        for(char c: t){
            freq2[c]++;
        }

        if(freq1 == freq2){
            return true;
        }else{
            return false;
        }
    }
};
