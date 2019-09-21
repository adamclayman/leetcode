class Solution(object):
    def reverse(self, x):
        """
        :type x: int
        :rtype: int
        """
        sign = 1 if x >= 0 else -1
        s = str(abs(x))[::-1]
        n = int(s)
        if n > 0x7fffffff or n < -0x80000000:
            return 0
        else:
            return sign * n
        