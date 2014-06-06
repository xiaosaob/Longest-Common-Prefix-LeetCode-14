// Write a function to find the longest common prefix string amongst an array of strings.

class Solution {
public:
    string longestCommonPrefix(vector<string> &strs) {
        string res("");
        if(strs.size() == 0) return res;
        int i = 0;
        while(true) {
            for(int j = 0; j < strs.size(); ++j) {
                if(i == strs[j].size() || (j > 0 && strs[j][i] != strs[j-1][i]))
                    return res;
            }
            res += strs[0][i];
            ++i;
        }
    }
};
