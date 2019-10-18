class Solution(object):
    def maxArea(self, height):
        maximum, left, right = 0, 0, len(height) - 1
        while (left < right):
            maximum = max(maximum, ((right - left)*min(height[left],height[right])))
            if (height[left] <= height[right]):
                left += 1
            else:
                right -= 1
        return maximum