


class Solution:
    
    #Function to find the minimum number of swaps required to sort the array.
	def minSwaps(self, nums):
		#Code here
        res=0
        temp=nums.copy()
        hashmap={}
        temp.sort()
        for i in range(len(nums)):
            hashmap[nums[i]]=i
        ini=0
        for i in range(len(nums)):
            if(nums[i]!=temp[i]):
                res+=1;
                ini=nums[i]
                nums[i],nums[hashmap[temp[i]]]=nums[hashmap[temp[i]]],nums[i]
                hashmap[ini]=hashmap[temp[i]]
                hashmap[temp[i]]=i
        return res;
    
#{ 
#  Driver Code Starts



if __name__ == '__main__':
	T=int(input())
	for i in range(T):
		n = int(input())
		nums = list(map(int, input().split()))
		obj = Solution()
		ans = obj.minSwaps(nums)
		print(ans)

# } Driver Code Ends
