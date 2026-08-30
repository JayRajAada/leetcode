class Solution {
public:
    vector<string> commonChars(vector<string>& words) {
        int minFreq[26];
        for (int i = 0; i < 26; ++i) minFreq[i] = 100;
        for (const string& word : words) {
            int charCount[26] = {0};
            for (char c : word) {
                charCount[c - 'a']++;
            }
            for (int i = 0; i < 26; ++i) {
                if (charCount[i] < minFreq[i]) {
                    minFreq[i] = charCount[i];
                }
            }
        }
        vector<string> result;
        for (int i = 0; i < 26; ++i) {
            while (minFreq[i]-- > 0) {
                result.emplace_back(1, i + 'a');
            }
        }
        return result;
    }
};