class Solution {
public:
    int subArraySum(vector<int>& arr , int goal){
        int l = 0 , r = 0 , sum = 0 , cnt = 0 , n = arr.size();
        if(goal < 0)    return 0;
        while(r < n){
            sum += arr[r];
            while(sum > goal){
                sum -= arr[l];
                l++;
            }
            cnt += (r - l + 1);
            r++;
        }
        return cnt;
    }
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        return subArraySum(nums , goal) - subArraySum(nums , goal - 1);
    }
};