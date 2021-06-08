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
#define ins insert
#define stu struct
#define emp(s) s.empty()
#define null NULL
#define cin(a) cin>>a;
#define input(v,n) for(int i=0;i<n;i++){int m;cin(m);v.pb(m);}
#define ppf	pop_front
#define elif else if
#define len(string)	string.length()
#define print(a) cout<<a<<endl;
#define lb lower_bound
#define ub upper_bound
#define uset unordered_set
#define sz(v) v.size()
#define printStack(ss) while(!emp(ss)){cout<<ss.top()<<" ";ss.pop();}cout<<endl;			
#define printArr(arr)	for(auto &i : arr){cout<<i<<" ";}cout<<endl;
#define printMap(m)	for(auto &v : m){cout<<v.ff<<" "<<v.ss<<endl;}
#define matinput(arr,n,m)	for(int i=0;i<n;i++){for(int j=0;j<m;j++){cin>>arr[i][j];}}
#define matoutput(arr,n,m) for(int i=0;i<n;i++){for(int j=0;j<m;j++){cout<<arr[i][j]<<" ";}print("\n");}
struct Node{
    int data;
    struct Node *next;
    Node(int x){
        data = x;
        next = NULL;
    }  
};
int linkedlistlen(Node * head){
	int res=0;
	while(head != NULL){
		res++;
		head=head->next;	
	}
	return res;
}

void solve () {
	int t;cin>>t;
	tc(t){
		str one;cin>>one;
		str two;cin>>two;

		int s1=len(one);
		int s2=len(two);

		if(one != two){
			print("0")
		}
		str tmp=one+one;
		if(count(tmp.begin(),tmp.end(),two) > 0){
			print("1")
		}
		else{
			print("0")
		}
	}
}

int32_t main(){
	ios_base::sync_with_stdio(false);
   	cin.tie(NULL);
	
	return 0;
}
