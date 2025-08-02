class Solution {
public:
    long long minCost(vector<int>& basket1, vector<int>& basket2) {
        map<int, int> freq;
        int minVal = INT_MAX;

        // Count the difference in frequency and find min value overall
        for (int val : basket1) {
            freq[val]++;
            minVal = min(minVal, val);
        }

        for (int val : basket2) {
            freq[val]--;
            minVal = min(minVal, val);
        }

        vector<int> extra;

        // Collect elements that are not balanced
        for (auto& [val, count] : freq) {
            if (count % 2 != 0) return -1;  // not possible
            for (int i = 0; i < abs(count) / 2; ++i) {
                extra.push_back(val);
            }
        }

        // Sort to get smallest elements first
        sort(extra.begin(), extra.end());

        long long cost = 0;
        int n = extra.size();

        // Swap the first half with optimal strategy
        for (int i = 0; i < n / 2; ++i) {
            cost += min(extra[i], 2 * minVal);
        }

        return cost;
    }
};
