class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int low = 0;
        int high = nums.size() - 1;

        while (low < high) {
            int mid = (low + high) / 2;

            // If mid element is greater than its next element,
            // then the peak lies on the left side (including mid).
            if (nums[mid] > nums[mid + 1]) {
                high = mid;
            } 
            // Else the peak lies on the right side
            else {
                low = mid + 1;
            }
        }

        // At the end, low == high and that is the peak index
        return low;
    }
};
