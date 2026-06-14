class Solution
{
public:
    void findCombinations(int ind, string &ds, string combos[],
                          vector<string> &ans, string digits)
    {
        if (ind == digits.length())
        {
            ans.push_back(ds);
            return;
        }
        int currentDigit = digits[ind] - '0';
        for (int i = 0; i < combos[currentDigit].length(); i++)
        {
            ds += combos[currentDigit][i];
            findCombinations(ind + 1, ds, combos, ans, digits);
            ds.pop_back();
        }
    }
    vector<string> letterCombinations(string digits)
    {
        string combos[] = {"", "", "abc", "def", "ghi",
                           "jkl", "mno", "pqrs", "tuv", "wxyz"};
        string ds = "";
        vector<string> ans;
        findCombinations(0, ds, combos, ans, digits);
        return ans;
    }
};