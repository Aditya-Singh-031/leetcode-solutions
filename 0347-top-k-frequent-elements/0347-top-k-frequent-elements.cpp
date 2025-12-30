class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> dict;
        for (int i : nums) {
            dict[i]++;
        }
        vector<pair<int, int>> n;

        for (auto j : dict) {
            n.push_back(j);
        }

        
        vector<int> b(k);

        for (int l = 0; l < k; l++) {
            pair<int, int> a = n[0];

            for (auto i : n) {
                
                if (i.second > a.second) {
                    a = i;
                }
            }

            b[l] = a.first;

            for (int m = 0; m < n.size(); m++) {
                if (a == n[m]) {
                    n.erase(n.begin() + m);
                    break;
                }
            }
        }
        return b;
    }
};