// { Driver Code Starts
#include <stdio.h>

void rotate(int arr[], int n){
    int res=arr[n-1],i;
    for(int i=n-1;i>0;i--)
    arr[i]=arr[i-1];
    arr[0]=res;
}

int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        int a[n] , i;
        for(i=0;i<n;i++)
        scanf("%d",&a[i]);
        rotate(a, n);
        for (i = 0; i < n; i++)
            printf("%d ", a[i]);
        printf("\n");
    }
        return 0;
}
// } Driver Code Ends
