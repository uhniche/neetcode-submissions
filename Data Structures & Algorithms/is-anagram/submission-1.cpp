class Solution {
public:
    bool isAnagram(string s, string t) {
        std::unordered_map<char, int> freq = {};

        if(s.size() != t.size()){
            return false;

        }

        for(unsigned int i =0; i<s.size(); i++){
            freq[s[i]]++;
            freq[t[i]]--;
        }

        for(auto pair: freq){
            if(pair.second != 0){
                return false;
            }
        }
        
        return true;
    }
};
