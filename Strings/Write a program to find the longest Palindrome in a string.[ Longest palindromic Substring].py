from itertools import permutations as pr
class Solution:
    def longestPalin(self, s):
        n = len(s)
        res = s[0]
        for i in range(1, n):
            mid = i
            left = i-1
            while mid < n and left >=0 and s[mid] == s[left]:
                mid += 1
                left -= 1
            res = max(res, s[left+1:mid], key=lambda x: len(x))
            left = i-1
            right = i+1
            while left >=0 and right < n and s[left] == s[right]:
                left -= 1
                right += 1
            res = max(res, s[left+1:right], key=lambda x: len(x))
        return res
#{ 
#  Driver Code Starts
#Initial Template for Python 3

if __name__ == '__main__':

    t = int(input())

    for _ in range(t):
        S = input()

        ob = Solution()

        ans = ob.longestPalin(S)

        print(ans)
# } Driver Code Ends
