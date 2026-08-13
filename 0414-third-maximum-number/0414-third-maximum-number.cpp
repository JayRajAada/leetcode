class Solution {
public:
    int thirdMax(vector<int>& nums) {
        long long first_max = LONG_MIN;
        long long second_max = LONG_MIN;
        long long third_max = LONG_MIN;
        
        for(int num : nums) {
            if(num == first_max || num == second_max || num == third_max) {
                continue;
            }
            if(num > first_max) {
                third_max = second_max;
                second_max = first_max;
                first_max = num;
            } 
            else if(num > second_max) {
                third_max = second_max;
                second_max = num;
            } 
            else if(num > third_max) {
                third_max = num;
            }
        }
        if(third_max == LONG_MIN) {
            return first_max;
        }
        
        return third_max;
    }
};