class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int left = 0, max_count = 0, curr_length = 0;
        unordered_set<int> seen;
        for (int right = 0; right < s.length(); right++) {
            char current = s[right];
            while (seen.contains(current)) {
                seen.erase(s[left]);
                left++; 
            }
            seen.insert(current);
            curr_length = right - left + 1;
            max_count = max(curr_length, max_count);
        }
        return max_count;
    }
};