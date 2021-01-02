/*
	We have an array of non-negative integers and we are initialised at first index of the array.
	Each element of the array represents maximum jump length to that position. Find minimum number of jumps to reach to the end of the array.
*/

include<bits/stdc++.h>
using namepsace std;

int MinJumpToReachToTheEnd(int[] a, int n)
{
	if(a[0]==0)
		return -1;
	if(n==1)
		return 0;
	int x,y,cnt=1;
	int i=0;
	x=y=a[0];
	
	while(i<n)
	{
		if(b<a[i])
			b=a[i];
		a--;
		b--;
		if(a==0)
		{
			if(b==0)
				return -1;
			a=b;
			cnt++;
		}
		
		i++;
	}
	return cnt;
}
int main()
{
	int array1[] = {3,2,1,0,4 }; 
    	int size = sizeof(array1) / sizeof(int); 
	cout<<MinJumpToReachToTheEnd(array1,size)<<"\n";
	return 0;
}
