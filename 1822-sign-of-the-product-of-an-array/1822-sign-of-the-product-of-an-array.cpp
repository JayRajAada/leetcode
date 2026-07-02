class Solution
{
public:
    int arraySign(vector<int> &nums)
    {
        int pdt_sign = 1;
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] == 0)
                return 0;
            else if (nums[i] < 0)
            {
                pdt_sign *= -1;
            }
        }
        if (pdt_sign < 0)
            return -1;
        return 1;
    }
};