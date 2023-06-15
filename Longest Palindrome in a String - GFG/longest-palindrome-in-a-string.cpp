//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    string longestPalin (string s) {
        // code here
         int n = s.size();
        int mx = 0;
        int end = 0;
        int start = 0; 
        for(int i = 0; i<n;i++){
            int l = i;
            int r = i;
            while(l>=0 and r<n and s[l]==s[r]){
                l--;
                r++;
            }
            r--;
            l++;
            int k = r-l+1;
            if(k>mx){
                mx = k;
                end = r;
                start = l;
            }
        }
         for(int i = 0; i<n;i++){
            int l = i-1;
            int r = i;
            while(l>=0 and r<n and s[l]==s[r]){
                l--;
                r++;
            }
            r--;
            l++;
            int k = r-l+1;
            if(k>mx){
                mx = k;
                end = r;
                start = l;
            }
        }
        string ans = "";
        for(int i = start; i<=end; i++)ans += s[i];
        return ans ;
    }
};

//{ Driver Code Starts.

int main()
{
    int t; cin >> t;
    while (t--)
    {
        string S; cin >> S;
        
        Solution ob;
        cout << ob.longestPalin (S) << endl;
    }
}
// Contributed By: Pranay Bansal

// } Driver Code Ends