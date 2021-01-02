#include <bits/stdc++.h>
using namespace std;

void swap(int *a,int *b)
{
    int t=*a;
    *a=*b;
    *b=t;
}
int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int arr[n];
	    for(int i=0; i<n; i++)
	        cin>>arr[i];
	    int k=0; 
	    for(int i=n-1; i>0; i--)
	    {
	        if(arr[i]>arr[i-1])
	           {
	               k=i-1;
	               break;
	           }
	    }
	    swap(&arr[k],&arr[n-1]);
	    for(int i=k+1; i<n; i++)
	    for(int j=k+1; j<n-1; j++)
	    {
	        if(arr[j]>arr[j+1])
	        {
	            int t=arr[j];
	            arr[j]=arr[j+1];
	            arr[j+1]=t;
	        }
	    }
	    
	    for(int i=0; i<n; i++)
	        cout<<arr[i]<<" ";
	        
	   cout<<"\n";
	}
	return 0;
}
/*
Input
2
3
1 2 3
6
1 2 3 6 5 4

Output:
1 3 2
1 2 4 3 5 6
*/
