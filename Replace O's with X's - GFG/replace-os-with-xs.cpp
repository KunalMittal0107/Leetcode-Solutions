//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
int delR[4]={-1,0,1,0};
int delC[4]={0,1,0,-1};
void dfs(int i,int j,vector<vector<char>>&board,vector<vector<bool>>&vis){
    vis[i][j]=true;
    for(int x=0;x<4;x++){
        int newR=i+delR[x];
        int newC=j+delC[x];
        if(newR>=0 && newR<board.size() && newC>=0 && newC<board[0].size() && vis[newR][newC]==false && board[newR][newC]=='O'){
            dfs(newR,newC,board,vis);
        }
    }
}
    vector<vector<char>> fill(int n, int m, vector<vector<char>> board)
    {
        // code here
        vector<vector<bool>>vis(n,vector<bool>(m,false));
        for(int i=0;i<n;i++){
            if(board[i][m-1]=='O' && vis[i][m-1]==false){
                dfs(i,m-1,board,vis);
            }
            if(board[i][0]=='O' && vis[i][0]==false){
                dfs(i,0,board,vis);
            }
        }
        for(int i=0;i<m;i++){
            if(board[0][i]=='O' && vis[0][i]==false){
                dfs(0,i,board,vis);
            }
            if(board[n-1][i]=='O' && vis[n-1][i]==false){
                dfs(n-1,i,board,vis);
            }
        }
        for(int i=0;i<board.size();i++){
            for(int j=0;j<m;j++){
                if(board[i][j]=='O' && vis[i][j]==false){
                    board[i][j]='X';
                }
            }
        }
        return board;
    }
};


//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n, m;
        cin>>n>>m;
        vector<vector<char>> mat(n, vector<char>(m, '.'));
        for(int i = 0;i < n;i++)
            for(int j=0; j<m; j++)
                cin>>mat[i][j];
        
        Solution ob;
        vector<vector<char>> ans = ob.fill(n, m, mat);
        for(int i = 0;i < n;i++) {
            for(int j = 0;j < m;j++) {
                cout<<ans[i][j]<<" ";
            }
            cout<<"\n";
        }
    }
    return 0;
}
// } Driver Code Ends