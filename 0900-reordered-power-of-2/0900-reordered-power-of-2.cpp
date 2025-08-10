class Solution {
public:
    bool reorderedPowerOf2(int n) {
        auto digitCount = [](int x) {
            array<int, 10> cnt = {0};
            while (x > 0) {
                cnt[x % 10]++;
                x /= 10;
            }
            return cnt;
        };

        array<int, 10> target = digitCount(n);

        for (int i = 0; i < 31; i++) { // 2^0 to 2^30
            if (digitCount(1 << i) == target) {
                return true;
            }
        }
        return false;
    }
};
