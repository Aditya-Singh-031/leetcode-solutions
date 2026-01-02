class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if (strs.empty())return "";
        sort(strs.begin(),strs.end());
        string prefix = strs[0];
        string last = strs[strs.size() - 1];
        int m = min(prefix.size(),last.size());
        string a ="";
        for (int i =0 ; i < m; i++){
            if(prefix[i]==last[i]) a+= last[i];
            else break;
        }
        return a;
    }
};