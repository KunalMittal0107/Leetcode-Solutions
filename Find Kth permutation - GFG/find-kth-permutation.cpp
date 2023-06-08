//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution
{
public:
    string kthPermutation(int n, int k)
    {
        // code here
        vector<int>ans;
        for(int i=1;i<=n;i++){
            ans.push_back(i);
        }
        k--;
        while(k--){
            next_permutation(ans.begin(),ans.end());
            
        }
        
        string str="";
        for(int i=0;i<ans.size();i++){
            str+=to_string(ans[i]);
        }
        return str;
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        Solution ob;
        string ans = ob.kthPermutation(n, k);
        cout << ans;
        cout << "\n";
    }
    return 0;
}

// } Driver Code Ends