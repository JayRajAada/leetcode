class Solution {
public:
    string largestNumber(vector<int>& nums) {
        vector<string> ds;
        string ans = "";
        for(int i = 0 ; i < nums.size() ; i++){
            ds.push_back(to_string(nums[i]));
        }
        sort(ds.begin(), ds.end(), [](string &a, string &b) {
            return a + b > b + a;
        });
        if(ds[0] == "0"){
            return "0";
        }
        for(int i = 0 ; i < ds.size() ; i++){
            ans += ds[i];
        }
        return ans;
    }
};