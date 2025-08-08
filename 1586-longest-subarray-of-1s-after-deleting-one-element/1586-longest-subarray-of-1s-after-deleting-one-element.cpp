class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int zero = 0;
        int left = 0;
        int maxLen = 0;
        for (int right = 0; right < nums.size(); right++) {
            if (nums[right] == 0) {
                zero++;
            }
            while (zero > 1) {
                if (nums[left] == 0) {
                    zero--;
                }
                left++;
            }
            maxLen = max(maxLen, right - left);
        }
        return maxLen;
    }
};