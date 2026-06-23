class Solution {
public:
    void helper(int ind , string num , int target , string ds, long eval , long residual, vector<string> &ans){
        if(ind == num.length()){
            if(eval == target){
                ans.push_back(ds);
            }
            return;
        }
        string currStr;
        long number = 0;
        for(int i = ind; i < num.length() ; i++){
            if(i > ind && num[ind] == '0')  return;
            currStr += num[i];
            number = number*10 + (num[i] - '0');
            if(ind == 0){
                helper(i + 1, num , target , ds + currStr , number , number , ans);
            }
            else{
                // for addition (+)
                helper(i + 1, num, target, ds + "+" + currStr, eval + number, number, ans);
                // for subtraction (-)
                helper(i + 1 , num , target , ds + "-" + currStr , eval - number , -number , ans);
                //for multiplication (*)
                helper(i + 1, num , target , ds + "*" + currStr , (eval - residual) + (residual*number) , residual*number, ans);
            }
        }
    }
    vector<string> addOperators(string num, int target) {
        vector <string> ans;
        string ds = "";
        helper(0 , num , target , ds , 0 , 0 , ans);
        return ans;
    }
};