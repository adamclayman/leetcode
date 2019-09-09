class Solution {
public:
    int divide(int dividend, int divisor) {
        int quotient = 0;
        int positive = true;
        if (dividend > 0 && divisor < 0 || dividend < 0 && divisor > 0)
            positive = false;
        if (dividend > 0) {
            while (dividend > 0) {
                dividend -= abs(divisor);
                quotient++;
            }
        } else {
            while (dividend < 0) {
                dividend += abs(divisor);
                quotient++;
            }
        }
        return positive == true ? quotient : quotient * -1;
    }
};