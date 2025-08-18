class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        unordered_map<int, int> freq;
        for (int x : nums) {
            freq[x]++;
        }
        for (auto x : freq) {
            if (x.second == 1)
                return x.first;
        }
        return -1;
    }
};