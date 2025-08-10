class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int, int> freq;
        for (int i : arr) {
            freq[i]++;
        }
        unordered_set<int> seen;
        for (auto j : freq) {
            if (!seen.insert(j.second).second) {
                return false;
            }
        }
        return true;
    }
};