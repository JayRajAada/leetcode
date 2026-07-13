class Solution
{
public:
    vector<int> singleNumber(vector<int> &nums)
    {
        long xor_all = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            xor_all ^= nums[i];
        }
        int rightmost = (xor_all & xor_all - 1) ^ xor_all;
        int b1 = 0, b2 = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] & rightmost)
            {
                b1 ^= nums[i];
            }
            else
            {
                b2 ^= nums[i];
            }
        }
        return {b1, b2};
    }
};