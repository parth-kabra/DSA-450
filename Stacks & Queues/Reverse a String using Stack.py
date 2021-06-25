#{ 
#Driver Code Starts

 # } Driver Code Ends
def reverse(S):
    
    #Add code here
    stack=[]
    for i in range(0,len(S),1):
        stack.append(S[i])
    res=""
    for i in range(0,len(S),1):
        res+=stack.pop()
    return res;
        

#{ 
#Driver Code Starts.
if __name__=='__main__':
    t=int(input())
    for i in range(t):
        str1=input()
        print(reverse(str1))
#} Driver Code Ends
