class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int i = 0;
        int j = 0;
        string result = "";
        while (i < word1.size() && j < word2.size()) {
            result.push_back(word1[i]);
            result.push_back(word2[j]);
            i++;
            j++;
        }
        while (word1[i]) {
            result.push_back(word1[i]);
            i++;
        }
        while (word2[j]) {
            result.push_back(word2[j]);
            j++;
        }
        return result;
    }
};