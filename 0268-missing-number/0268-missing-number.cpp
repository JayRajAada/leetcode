class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int xor_1 = 0;
        int ans = 0;
        for(int i = 0 ; i < nums.size() ; i++){
            xor_1 = nums[i] ^ (i + 1);
            ans = ans ^ xor_1;
        }
        return ans;
    }
};