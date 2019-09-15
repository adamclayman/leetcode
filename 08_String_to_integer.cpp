class Solution {
public:
    int myAtoi(string str) {
        int index = 0;
        int positive = 1;
        long number = 0;
        while (isspace(str[index]))
            index++;
        if (str[index] == '-') {
            positive = -1;
            index++;
        } else if (str[index] == '+')
            index++;
        if (!isdigit(str[index])) {
            return 0;
        }
        while (isdigit(str[index])) {
            number = number * 10 + (str[index] - '0');
            index++;            
            if (number * positive > INT_MAX) return INT_MAX;
            if (number * positive < INT_MIN) return INT_MIN;
        }
        number = number * positive;
        return number;
    }
};