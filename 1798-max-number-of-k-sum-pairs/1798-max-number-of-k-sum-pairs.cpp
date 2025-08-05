class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        unordered_map<int, int> freq;
        int count = 0;
        for (int num : nums) {
            int compliment = k - num;
            if (freq[compliment] > 0) {
                count++;
                freq[compliment]--;
            } else {
                freq[num]++;
            }
        }
        return count;
    }
};