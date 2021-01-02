/* You are given an array with increasing and decreasing order. You have to find the maximum value from the array using binary search concept. 
	CONDITIONS:
		1. Array can be in order of first increasing and then decreasing
		2. Array can be in increasing order only.
		3. Array can be in decreasing order only.
	CONSTRAINTS:
		1. Array can not be in order like first decreasing and then increasing


	APPROACH:
		1. left less & right less- the number itself is the max
		2. left less & right more- max value will be only right side 
		3. left more & right less- max value will ba only in left side
	
	Time Complexity:O(n)
	Space Complexity:O(1)

	OUTPUT:
		The maximum Value is 50


*/

#include<bits/stdc++.h>
using namespace std;

int findMaximumValue(int[] a, int low, int high)
{
	if(low==high)
		return a[low];
	if(low+1==high)
	{
		if(a[low]>a[high])
			return a[low];
		else
			return a[high];	
	}

	int mid=(low+high)/2;
	if(a[mid]>a[mid-1] && a[mid]>a[mid+1])
		return a[mid];
	if(a[mid]<a[mid-1] && a[mid]>a[mid+1])
		return findMaxinmumValue(a,low,mid-1);
	if(a[mid]>a[mid-1] && a[mid]<a[mid+1])
		return findMaximumValue(a,mid+1,high);
}

int main()
{
    int array1[] = {1, 3, 50, 10, 9, 7, 6};  
    int n = sizeof(array1)/sizeof(array1[0]);  
    cout << "The maximum Value  is " << findMaximumValue(array1, 0, n-1);  
    return 0;  
}




