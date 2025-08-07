class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double avgSum = 0;

        for (int i = 0; i < k; i++) {
            avgSum += nums[i];
        }

        double maxAvg = avgSum;

        for (int i = k; i < nums.size(); i++) {
            avgSum = avgSum - nums[i - k] + nums[i];
            maxAvg = max(maxAvg, avgSum);
        }
        return maxAvg / k;
    }
};