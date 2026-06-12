class Solution {
public:
    // Optimal
    void findSubsets(int ind , vector<int> &ds , vector<vector<int>> &ans, vector<int>& arr){
        ans.push_back(ds);
        for(int i = ind ; i < arr.size() ; i++){
            if(i > ind && arr[i] == arr[i - 1]) continue;
            ds.push_back(arr[i]);
            findSubsets(i + 1 , ds , ans , arr);
            ds.pop_back();
        }
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<int> ds;
        vector<vector<int>> ans;
        sort(nums.begin() , nums.end());
        findSubsets(0 , ds , ans , nums);
        return ans;
    }
};