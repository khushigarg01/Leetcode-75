class Solution {
public:
    bool isVowel(char c) {
        return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
    }
    int maxVowels(string s, int k) {
        int count = 0;
        int maxCount = 0;
        int l = 0;
        int r = 0;
        while (r < s.size()) {
            if (isVowel(s[r])) {
                count++;
            }
            if ((r - l + 1) == k) {
                maxCount = max(count, maxCount);
                if (isVowel(s[l])) {
                    count--;
                }
                l++;
            }
            r++;
        }
        return maxCount;
    }
};