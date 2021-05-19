class Solution{
	int getPairsCount(int arr[],int n,int k){
		unordered_map<int,int> m;
		for(int i=0;i<n;i++){
			m[arr[i]]++;
		}
		int res=0;
		for(int i=0;i<n;i++){
			res+=m[k-arr[i]];
			if(k-arr[i]==arr[i]){
				res--
			}
		}
		return res/2;
	}
};
