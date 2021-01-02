/*
	Print given matrix in spiral format

	INPUT:
	4 4
        1 2 3 4
	5 6 7 8
	9 10 11 12
	13 14 15 16

	OUTPUT:
	1 2 3 4 8 12 16 15 14 13 9 5 6 7 11 10

*/
#include <bits/stdc++.h> 
using namespace std; 

class Solution
{   
public:     
    vector<int> spirallyTraverse(vector<vector<int> > matrix, int r, int c) 
    {
        int outer;
        if(r<c)
        {
            if(r%2==0)
            outer=r/2;
            else
            outer=(r/2)+1;
        }
        else
        {
            if(c%2==0)
            outer=c/2;
            else
            outer=(c/2)+1;
        }
        int x=y=0;
        int i,j,k;
        for( k=0; k<outer; k++)
        {
            i=k;
            for( j=k;j<c;j++)
                cout<<matrix[i][j]<<" ";
             
            j=c;
            for(i=c; i<r;i++)
                cout<<matrix[i][j]<<" ";
                
            i=r;
            for(j=c;j>k;j--)
                cout<<matrix[i][j]<<" ";
                
            j=r;
            for(i=r;i>k;i--)
                cout<<matrix[i][j]<<" ";
        }
    }
};


int main() {
    int t;
    cin>>t;
    
    while(t--) 
    {
        int r,c;
        cin>>r>>c;
        vector<vector<int> > matrix(r); 

        for(int i=0; i<r; i++)
        {
            matrix[i].assign(c, 0);
            for( int j=0; j<c; j++)
            {
                cin>>matrix[i][j];
            }
        }

        Solution ob;
        vector<int> result = ob.spirallyTraverse(matrix, r, c);
        for (int i = 0; i < result.size(); ++i)
                cout<<result[i]<<" ";
        cout<<endl;
    }
    return 0;
}  
