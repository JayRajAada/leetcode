class Solution
{
public:
    void findCombination(int i, vector<int> &arr, vector<int> &ds,
                         vector<vector<int>> &ans, int target)
    {
        if (i == arr.size())
        {
            if (target == 0)
            {
                ans.push_back(ds);
            }
            return;
        }
        if (arr[i] <= target)
        {
            ds.push_back(arr[i]);
            findCombination(i, arr, ds, ans, target - arr[i]);
            ds.pop_back();
        }
        findCombination(i + 1, arr, ds, ans, target);
    }
    vector<vector<int>> combinationSum(vector<int> &candidates, int target)
    {
        vector<vector<int>> ans;
        vector<int> ds;
        findCombination(0, candidates, ds, ans, target);
        return ans;
    }
};