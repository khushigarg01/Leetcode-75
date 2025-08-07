class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int zero = 0;
        int left = 0;
        int right = 0;
        int maxLen = 0;
        while (right < nums.size()) {
            if (nums[right] == 0) {
                zero++;
            }
            while (zero > k) {
                if (nums[left] == 0) {
                    zero--;
                }
                left++;
            }
            maxLen = max(maxLen, right - left + 1);
            right++;
        }
        return maxLen;
    }
};