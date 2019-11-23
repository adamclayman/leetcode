class MovingAverage:

    def __init__(self, size: int):
        """
        Initialize your data structure here.
        """
        self.q = collections.deque()
        self.size = size

    def next(self, val: int) -> float:
        self.q.append(val)
        if (len(self.q) > self.size):
            self.q.popleft()
        sum = 0.0
        for value in self.q:
            sum += value
        average = sum / len(self.q)
        return average


# Your MovingAverage object will be instantiated and called as such:
# obj = MovingAverage(size)
# param_1 = obj.next(val)
