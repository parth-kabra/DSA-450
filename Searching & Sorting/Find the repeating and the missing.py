#User function Template for python3

class Solution:
    def findTwoElement( self,arr, size):
        # code here
        rep=-1
        for i in range(size):
            if arr[abs(arr[i])-1] > 0:
                arr[abs(arr[i])-1] = -arr[abs(arr[i])-1]
            else:
                rep=abs(arr[i])
        miss=-1
        for i in range(size):
            if arr[i]>0:
                miss=i+1
        return rep,miss
#{ 
#  Driver Code Starts
#Initial Template for Python 3

if __name__ == '__main__': 

    tc=int(input())
    while tc > 0:
        n=int(input())
        arr=list(map(int, input().strip().split()))
        ob = Solution()
        ans=ob.findTwoElement(arr, n)
        print(str(ans[0])+" "+str(ans[1]))
        tc=tc-1
# } Driver Code Ends
