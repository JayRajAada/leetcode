class Solution {
public:
    bool checkPerfectNumber(int num) {
        // Optimal
        if (num <= 1) {
            return false;
        }
        long long sum_div = 1;
        for (int i = 2; i * i <= num; i++) {
            if (num % i == 0) {
                sum_div += i;
                if (i * i != num) {
                    sum_div += num / i;
                }
            }
        }
        if (sum_div == num) {
            return true;
        }
        return false;
    }
};