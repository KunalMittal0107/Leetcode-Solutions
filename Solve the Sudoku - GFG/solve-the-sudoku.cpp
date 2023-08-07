//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
// UNASSIGNED is used for empty cells in sudoku grid 
#define UNASSIGNED 0  

// N is used for the size of Sudoku grid.  
// Size will be NxN  
#define N 9  


// } Driver Code Ends
class Solution 
{
    public:
    //Function to find a solved Sudoku. 
    bool issafe(int board[N][N],int i,int j,int k,int n){
    for(int l=0;l<n;l++){
        if(board[i][l]==(k)){
            return false;
        }
    }
    for(int l=0;l<n;l++){
        if(board[l][j]==(k)){
            return false;
        }
    }
    while(i%3!=0){
        i--;
    }
    while(j%3!=0){
        j--;
    }
    for(int l=i;l<i+3;l++){
        for(int m=j;m<j+3;m++){
            if(board[l][m]==(k)){
            return false;
        }
        }
    }
    return true;

}
bool helper(int board[N][N],int i,int j,int n,int m){
  
    for(int i=0;i<n;i++){

    for(int j=0;j<n;j++){
        if(board[i][j]==0){
    for(int k=1;k<10;k++){
        if(issafe(board,i,j,k,n)){
            board[i][j]=k;
            if(helper(board,i,j,n,m)){
                return true;
            }else
            board[i][j]=0;
        }
        }
        return false;
    }
    }}
    return true;
}
    bool SolveSudoku(int grid[N][N])  
    { 
        // Your code here
        return helper(grid,0,0,9,9);
    }
    
    //Function to print grids of the Sudoku.
    void printGrid (int grid[N][N]) 
    {
        // Your code here
        if(!SolveSudoku(grid)){
            cout<<"No solution exists"<<endl;
            return;
        }
        for(int i=0;i<N;i++){
            for(int j=0;j<N;j++){
                cout<<grid[i][j]<<" ";
            }
        }
    }
};

//{ Driver Code Starts.

int main() {
	int t;
	cin>>t;
	while(t--)
	{
		int grid[N][N];
		
		for(int i=0;i<9;i++)
		    for(int j=0;j<9;j++)
		        cin>>grid[i][j];
		        
		Solution ob;
		
		if (ob.SolveSudoku(grid) == true)  
            ob.printGrid(grid);  
        else
            cout << "No solution exists";  
        
        cout<<endl;
	}
	
	return 0;
}
// } Driver Code Ends