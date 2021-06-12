#include <bits/stdc++.h>
using namespace std;

//CODE FASTER
#pragma GCC target ("avx2")
#pragma GCC optimization ("O3")
#pragma GCC optimization ("unroll-loops")

//MACROS 
//#define 						int long long
#define 						str string
#define 						ff first
#define 						vec vector
#define naturalNumSum(N) 		N*(N+1)/2
const int mod=					1e9+7;
#define gcd(a,b)				 __gcd(a,b);
#define lower(string) 			tolower(string)
#define lcm(a,b) 				a*b/gcd(a,b);
#define pi 						pair
#define ss 						second
#define tc(t) 					while(t--)
#define pb(a) 					push_back(a);
#define endl 					"\n"
#define db 						double
#define clr(a) 					a.clear();
#define fl 						float
#define del 					delete
#define umap 					unordered_map
#define ins 					insert
#define emp(s) 					s.empty()
#define null 					NULL
#define cin(a) 					cin>>a;
#define input(v,n) 				for(int i=0;i<n;i++){int m;cin(m);v.pb(m);}
#define ppf						pop_front
#define elif 					else if
#define len(string)				string.length()
#define print(a) 				cout<<a<<endl;
#define lb 						lower_bound
#define ub 						upper_bound
#define uset 					unordered_set
#define sz(v) 					v.size()

//STL INPUT & OUTPUT
#define printStack(ss) while(!emp(ss)){cout<<ss.top()<<" ";ss.pop();}cout<<endl;			
#define printArr(arr)	for(auto &i : arr){cout<<i<<" ";}cout<<endl;
#define printMap(m)	for(auto &v : m){cout<<v.ff<<" "<<v.ss<<endl;}
#define matinput(arr,n,m)	for(int i=0;i<n;i++){for(int j=0;j<m;j++){cin>>arr[i][j];}}
#define matoutput(arr,n,m) for(int i=0;i<n;i++){for(int j=0;j<m;j++){cout<<arr[i][j]<<" ";}print("\n");}

//LINKEDLIST SNIPPETS
struct Node {
    int data;
    struct Node* next;
};
 
Node* newNode(int key)
{
    Node* temp = new Node;
    temp->data = key;
    temp->next = NULL;
    return temp;
}
int linkedlistlen(Node * head){
	int res=0;
	while(head != NULL){
		res++;
		head=head->next;	
	}
	return res;
}

//USER CODE
int result(vec<int> arr, int n, int x, int k){
	int i=0;
	while(i < n){
		if(arr[i]==x){
			return i;
		}
		i=i+max(1,abs(arr[i]-x)/k);
	}
	return -1;
}
void solve () {
	int t;cin>>t;
	tc(t){
		int n,x,k,i=0;
		cin>>n;
		vec<int> arr;
		input(arr,n);
		cin>>x;
		cin>>k;
		int res=result(arr,n,x,k);
		print(res)
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
