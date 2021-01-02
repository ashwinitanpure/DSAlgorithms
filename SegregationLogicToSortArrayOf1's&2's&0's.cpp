/*
	We are given an array of 0's, 1's and 2's. Sort the array in time complexity of O(n) and space complexity O(1) in linear traversal.

	CONDITIONS:
		1. Array contains only 0/1/2 
		2. No extra variable can be used
		3. Sorting should be done in linear traversal.

	CONSTRAINTS:
		1. Don't use count sort.

	APPROACH:
		1. if element is 0 then swap it with left side element
		2. if elsment is 2 then swap it in right side
		3. if element is 1 then keep it as it is
	Time Complexity: O(n)
	space complexity:O(1)

	OUTPUT:
		segregated array 0 0 0 0 1 1 1 1 1 2 2 2
*/
#include<bits/stdc++.h>
using namespace std;

sort012(int[] a, int n)
{
	int l,m,h;
	l=m=0;
	h=n-1;
	for(int i=0; i<n-1; i++)
	{
		if(a[m]==0)
		{
			swap(&a[m],&a[l]);
			l++;
			m++;
		}
		if(a[m]==2)
		{
			swap(&a[m],&a[h]);
			h--;
		}
		if(a[m]==1)
		{
			m++;
		}
	}
}
void swap(int *a, int *b)
{
	int t=*a;
	*a=*b;
	*b=t;
}

int main() 
{ 
    int array1[] = {2, 1, 1, 0, 1, 2, 1, 2, 0, 0, 0, 1}; 
    int arr_size = sizeof(array1)/sizeof(array1[0]); 
    int i; 
  
    sort012(array1, arr_size); 
  
    cout << "segregated array "; 
    for (int i = 0; i < arr_size; i++) 
        cout << array1[i] << " "; 
    return 0; 
} 
