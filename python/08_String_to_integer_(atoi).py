class Solution(object):
    def myAtoi(self, str):
        """
        :type str: str
        :rtype: int
        """
        if not str or len(str) == 0:
            return 0
        i = 0
        while str[i] == ' ' and i < len(str) - 1:
            i += 1
        str = str[i:]
        sign = 1
        j = 0
        if str[0] == '+':
            j += 1
        elif str[0] == '-':
            sign = -1
            j += 1
        value = 0
        result = 0
        while len(str) > j and str[j] >= '0' and str[j] <= '9':
            result = result * 10 + (ord(str[j]) - ord('0'))
            j += 1
        result = result * sign
        if result > (2 ** 31 - 1):
            return 2 ** 31 - 1
        elif result < -(2 ** 31):
            return -(2 ** 31)
        else:
            return result