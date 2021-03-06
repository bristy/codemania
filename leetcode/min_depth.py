# https://oj.leetcode.com/problems/minimum-depth-of-binary-tree/


class TreeNode:
    """ Tree Node """
    def __init__(self, x):
        self.val = x
        self.left = None
        self.right = None


class Solution:
    # @param root, a tree node
    # @return an integer
    def minDepth(self, root):
        if root is None:
            return 0
        else:
            return self.solve(root, 0)

    def solve(self, root, path):
        if root.left is None and root.right is None:
            return path + 1
        else:
            ret = 100000
            if root.left is not None:
                ret = min(self.solve(root.left, path + 1), ret)
            if root.right is not None:
                ret = min(self.solve(root.right, path + 1), ret)
            return ret

if __name__ == '__main__':
    root = TreeNode(1)
    root.left = TreeNode(2)
    root.right = TreeNode(3)
    s = Solution()
    print s.sumNumbers(root)
