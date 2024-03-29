//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
public:
    int dx[8]={-2,-2,2,2,-1,-1,1,1};
    int dy[8]={-1,1,-1,1,2,-2,2,-2};
    int knightInGeekland(int start_x,int start_y,vector<vector<int>> &arr){
        // Code here
        int n=arr.size(),m=arr[0].size();
        
        vector<vector<bool>> vis(n,vector<bool>(m,0));
        queue<pair<int,int>> q;
        q.push({start_x,start_y});
        vis[start_x][start_y]=true;
        
        vector<int> points(1e3+1,0);
        int steps=0;
        while(!q.empty())
        {
            int qsize=q.size(); 
            while(qsize--)
            {
                int x=q.front().first;
                int y=q.front().second;
                q.pop();
                
                points[steps]+=arr[x][y];
                
                for(int k=0;k<8;k++)
                {
                    int currx=x+dx[k];
                    int curry=y+dy[k];
                    
                    if(currx<0 || curry<0 || currx>=n || curry>=m || vis[currx][curry])
                        continue;
                    vis[currx][curry]=1;
                    q.push({currx,curry});
                }
            }
            steps++;
        }
        
        int ans,maxi=-1e9;
        for(int i=0;i<=1e3;i++)
        {
            int curr=i;
            int totalpoints=0;
            while(curr<=1e3)
            {
                if(points[curr]==0) break;
                totalpoints+=points[curr];
                curr+=points[curr];
            }
            points[i]=totalpoints;
            if(points[i]>maxi)
            {
                maxi=points[i];
                ans=i;
            }
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m,start_x,start_y;
        cin>>n>>m>>start_x>>start_y;
        vector<vector<int>> arr(n,vector<int>(m));
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cin>>arr[i][j];
            }
        }
        Solution ob;
        cout<<ob.knightInGeekland(start_x,start_y,arr)<<endl;
    }
}
// } Driver Code Ends