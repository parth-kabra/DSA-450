#include <bits/stdc++.h>
#pragma GCC target ("avx2")
#pragma GCC optimization ("O3")
#pragma GCC optimization ("unroll-loops")
using namespace std;
#define int long long
#define str string
#define ff first
#define vec vector
#define naturalNumSum(N) N*(N+1)/2
#define p(x) push(x)
const int mod=1e9+7;
#define gcd(a,b) __gcd(a,b);
#define lower(string) tolower(string)
#define lcm(a,b) a*b/gcd(a,b);
#define pi pair
#define ss second
#define tc(t) while(t--)
#define pb(a) push_back(a);
#define endl "\n"
#define db double
#define clr(a) a.clear();
#define fl float
#define del delete
#define umap unordered_map
#define mp make_pair
#define ins	insert
#define stu struct
#define vd void
#define null NULL
#define cin(a) cin>>a;
#define input(v,n) for(int i=0;i<n;i++){int m;cin(m);v.pb(m);}
#define ppf	pop_front
#define elif else if
#define stk stack
#define len(string)	string.length()
#define print(a) cout<<a<<endl;
#define lb lower_bound
#define ub upper_bound
#define printArr(arr) for(auto &i : arr){cout<<i<<" ";}
#define printMap(m)	for(auto &v : m){cout<<v.ff<<" "<<v.ss<<endl;}
vd solve(){
	int t;cin>>t;
	tc(t){
		int n;cin>>n;
		int arr[n];
		for(int i=0;i<n;i++){
			cin>>arr[i];
		}
		int k;cin>>k;
		int res=n/k;
		map<int , int > m;
		for(int &i : arr){
			m.ins({i, count(arr,arr+n,i)});
		}
		for(auto it = m.begin(); it != m.end() ;it++){
			if(it->ss > res){
				cout<<"Count of "<<it->ff<<" = "<<it->ss<<endl;
			}
		}

	}
}
int32_t main(){
	ios_base::sync_with_stdio(false);
   	cin.tie(NULL);
	#ifndef ONLINE_JUDGE
	    freopen("input.txt", "r", stdin);
	    freopen("output.txt", "w", stdout);
	#endif
	   solve();
	return 0;
}
