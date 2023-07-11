//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
#define MAX 1000

// } Driver Code Ends
class Solution
{
    public:
    /*You are required to complete this method*/
    int findK(int a[MAX][MAX],int n,int m,int k)
    {
 		// Your code goes here.
 		if(n*m<k){
 		    return -1;
 		}
 		int top=0;
 		int bottom=n-1;
 		int left=0;
 		int right=m-1;
 		vector<int>arr;
 		while(top<=bottom && left<=right){
 		    for(int i=left;i<=right;i++){
 		        arr.push_back(a[top][i]);
 		    }
 		    top++;
 		    for(int i=top;i<=bottom;i++){
 		        arr.push_back(a[i][right]);
 		    }
 		    right--;
 		    if(top<=bottom){
 		    for(int i=right;i>=left;i--){
 		        arr.push_back(a[bottom][i]);
 		    }
 		    }
 		    bottom--;
 		    if(left<=right){
 		    for(int i=bottom;i>=top;i--){
 		        arr.push_back(a[i][left]);
 		    }
 		    }
 		    left++;
 		}
//  		for(auto x:arr){
//  		    cout<<x<<" ";
//  		}
//  		cout<<endl;
 		return arr[k-1];
 		
    }
};





//{ Driver Code Starts.
int main()
{
    int T;
    cin>>T;
  
    while(T--)
    {
        int n,m;
        int k=0;
        //cin>>k;
        cin>>n>>m>>k;
        int a[MAX][MAX];
        
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                cin>>a[i][j];
            }
        }
        Solution ob;
        cout<<ob.findK(a,n,m,k)<<endl;
        
       
    }
}
// } Driver Code Ends