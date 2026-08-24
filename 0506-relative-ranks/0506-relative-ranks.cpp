class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        int n = score.size();
        vector<int> indices(n);
        for (int i = 0; i < n; ++i) {
            indices[i] = i;
        }
        sort(indices.begin(), indices.end(), [&](int a, int b) {
            return score[a] > score[b];
        });
        vector<string> ans(n);
        for (int i = 0; i < n; ++i) {
            if (i == 0) {
                ans[indices[i]] = "Gold Medal";
            } else if (i == 1) {
                ans[indices[i]] = "Silver Medal";
            } else if (i == 2) {
                ans[indices[i]] = "Bronze Medal";
            } else {
                ans[indices[i]] = to_string(i + 1);
            }
        }
        return ans;
    }
};