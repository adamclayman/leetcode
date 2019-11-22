# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, x):
#         self.val = x
#         self.left = None
#         self.right = None

from collections import deque

class Solution:
    def minDepth(self, root: TreeNode) -> int:
        q = deque()
        q.append((root,1))
        if root is None:
            return 0
        while q:
            node, step = q.popleft()
            if (node.left == None and node.right == None):
                return step
            elif (node.left and node.right == None):
                q.append((node.left, step+1))
            elif (node.right and node.left == None):
                q.append((node.right, step+1))
            else:
                q.append((node.left, step+1))
                q.append((node.right, step+1))