#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends

void merge(int a[], int lb, int mid, int ub)
{
    int i=lb;
    int j=mid+1;
    int k=lb;
    //int len=a.size();
    int b[ub-lb];
    while(i<=mid && j<=ub)
    {
        if(a[i]<=a[j])
        {
            b[k]=a[i];
            i++;
        }
        else
        {
            b[k]=a[j];
            j++;
        }
        k++;
    }
    if(i>mid)
    {
        while(j<=ub)
        {
            b[k]=a[j];
            j++;
            k++;
        }
    }
    else
    {
        while(i<=mid)
        {
            b[k]=a[i];
            i++;
            k++;
        }
    }
    for(int s=lb; s<=ub; s++)
    {
        a[s]=b[s];
    }
}
void mergesort(int a[], int lb, int ub)
{
    if(lb<ub)
    {
        int mid=(ub+lb)/2;
        mergesort(a,lb,mid);
        mergesort(a,mid+1,ub);
        merge(a,lb,mid,ub);
    }
}
int findPlatform(int arr[], int dep[], int n)
{
    mergesort(dep,0,n-1);
    mergesort(arr,0,n-1);
    int mxplt=1,plt=1;
    int j=0;
    int i=1;
    while(i<n && j<n)
    {
        if(arr[i]<dep[j])
        {
            plt++;
            i++;
            if(plt>mxplt)
                mxplt=plt;
        }
        else
        {
            plt--;
            j++;
        }
    }
    return mxplt;
}


// { Driver Code Starts.
// Driver code
int main()
{
    int t;
    cin>>t;
    while(t--) 
    {
        int n;
        cin>>n;
        int arr[n];
        int dep[n];
           for(int i=0;i<n;i++)
        cin>>arr[i];
        for(int j=0;j<n;j++){
            cin>>dep[j];
        }
    cout <<findPlatform(arr, dep, n)<<endl;
    } 
   return 0;
}  // } Driver Code Ends
