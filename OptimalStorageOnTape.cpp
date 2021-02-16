/*Finding optimal storage on tape using greedy method
	time complexity: o(nlogn)

 	Input: n=3
	       L={5,3,10}
	Output: 29/3
*/
#include <bits/stdc++.h>
#include<climits>
using namespace std;

void MRT(int *a, int n)
{
    sort(a,a+n);
    int mrt=0;
    for(int i=0; i<n; i++)
    {
        int sum=0;
        for(int j=0; j<=i;j++)
        {
            sum+=a[j];
        }
        mrt+=sum;
    }
    float m=mrt/n;
    cout<<fixed<<setprecision(4)<<m<<"\n";
}
int main()
{
    //vector<int> arr;
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n;i++)
    {
        cin>>arr[i];
    }
    
    MRT(arr,n);
    return 0;
}
