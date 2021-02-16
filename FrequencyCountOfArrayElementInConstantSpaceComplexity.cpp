/*
	Count Frequency of 1-n elements. Array element will be only within range of 1-n.
	
	Time Complexity: O(n)
	Space Complexity: O(1)

	INPUT:
	1
	5
	2 3 2 4 3
	OUTPUT:
	0 2 2 1 0	
*/
#include<bits/stdc++.h> 
using namespace std; 
void frequencycount(vector<int>& arr,int n);


void frequencycount(vector<int>& arr,int n)
{ 
    for(int i=0; i<n; i++)
    {
        arr[i]=arr[i]-1;
    }
    for(int i=0; i<n; i++)
    {
        int k=(arr[i]%n);
        arr[k]=arr[k]+n;
        
    }
    for(int i=0; i<n; i++)
    {
        arr[i]=arr[i]/n;
    }
}



int main() 
{ 
	long long t;
	
	//testcases
	cin >> t;
	
	while(t--){
	    
	    int n;
	    //size of array
	    cin >> n; 
	    
	    vector<int> arr(n,0);
	    
	    //adding elements to the vector
	    for(int i = 0;i<n;i++){
	        cin >> arr[i]; 
	    }

        //calling frequncycount() function
		frequencycount(arr,n); 
		
		//printing array elements
	    for (int i =0; i<n; i++) 
			cout<<arr[i]<<" ";
	    cout<<endl;
	}	
	return 0; 
}

