// { Driver Code Starts
#include<bits/stdc++.h>
 
using namespace std; 


bool findPair(int arr[], int size, int n);

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int l,n;
        cin>>l>>n;
        int arr[l];
        for(int i=0;i<l;i++)
            cin>>arr[i];
        if(findPair(arr, l, n))
            cout<<1<<endl;
        else cout<<"-1"<<endl;
    }
    
  
    return 0;
}// } Driver Code Ends


bool findPair(int arr[], int size, int n){
    //code
    int i = 0; 
    int j = 1; 
    sort(arr,arr+size);
    while (i < size && j < size) {
        if (i != j && arr[j] - arr[i] == n) {
            return true; 
        } 
        else if (arr[j]-arr[i] < n) 
            j++; 
        else
            i++; 
    }
    return false; 
}
