class Solution {
public:
    int findShortestSubArray(vector<int>& nums) {
        int left[50000] = {0};
        int count[50000] = {0};
        int max_degree = 0;
        int min_len = nums.size();
        for (int i = 0; i < nums.size(); ++i) {
            int val = nums[i];
            if (count[val] == 0) {
                left[val] = i;
            }
            count[val]++;
            int current_len = i - left[val] + 1;
            if (count[val] > max_degree) {
                max_degree = count[val];
                min_len = current_len;
            } else if (count[val] == max_degree) {
                min_len = min(min_len, current_len);
            }
        }
        return min_len;
    }
};