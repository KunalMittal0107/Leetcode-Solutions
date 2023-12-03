//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
/*You are required to complete this function*/

class Solution{
    public:
    int maxLen(vector<int>&A, int n)
    {   
        // Your code here
        vector<int>pre(n,0);
        for(int i=0;i<n;i++){
            if(i==0){
                pre[i]=A[i];
                
                continue;
            }
            pre[i]=pre[i-1]+A[i];
            
        }
        int ans=0;
        unordered_map<int,int>mp;
        for(int i=0;i<n;i++){
            if(pre[i]==0){
                ans=max(ans,i+1);
            }else if(mp.find(pre[i])!=mp.end()){
                ans=max(ans,i-mp[pre[i]]);
            }else{
                mp[pre[i]]=i;
            }
        }
        return ans;
    }
};


//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int m;
        cin>>m;
        vector<int> array1(m);
        for (int i = 0; i < m; ++i){
            cin>>array1[i];
        }
        Solution ob;
        cout<<ob.maxLen(array1,m)<<endl;
    }
    return 0; 
}



// } Driver Code Ends