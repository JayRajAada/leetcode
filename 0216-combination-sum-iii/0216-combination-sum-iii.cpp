class Solution {
public:
    void findCombination(int ind , vector<vector<int>> &ans, vector<int> & ds, int n , int k){
        if(ds.size() == k){
            if(n == 0){
                ans.push_back(ds);
            }
            else return;
        }
        for(int i = ind ; i <= 9 ; i++){
            if(i > n)   break;
            ds.push_back(i);
            findCombination(i + 1 , ans , ds , n - i , k);
            ds.pop_back();
        }
    }
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<vector<int>> ans;
        vector <int> ds;
        findCombination(1 , ans , ds , n , k);
        return ans;
    }
};
