#User function Template for python3

class Solution:
    def factorial(self, num):
        #code here
        sum=1
        l=[]
        if num==0:
            return 1
        else:
            for i in range(1, num+1):
                sum*=i
                return sum

#{ 
#  Driver Code Starts
#Initial Template for Python 3

if __name__ == '__main__':
    t=int(input())
    for _ in range(t):
        N = int(input())
        ob = Solution()
        ans = ob.factorial(N);
        for i in ans:
            print(i,end="")
        print()
    
# } Driver Code Ends
