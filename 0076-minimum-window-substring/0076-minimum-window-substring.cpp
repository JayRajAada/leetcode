class Solution {
public:
    string minWindow(string s, string t) {
        if (s.length() < t.length()) return "";
        vector<int> hash(128, 0);
        for (char c : t) {
            hash[c]++;
        }
        int l = 0, r = 0;
        int min_length = INT_MAX;
        int start_idx = -1;
        int count = t.length(); 
        while (r < s.length()) {
            if (hash[s[r]] > 0) {
                count--;
            }
            hash[s[r]]--; 
            while (count == 0) {
                int current_length = r - l + 1;
                if (current_length < min_length) {
                    min_length = current_length;
                    start_idx = l;
                }
                hash[s[l]]++;
                if (hash[s[l]] > 0) {
                    count++;
                }
                
                l++;
            }
            r++;
        }

        return min_length == INT_MAX ? "" : s.substr(start_idx, min_length);
    }
};