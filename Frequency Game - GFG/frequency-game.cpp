//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution{
public:
static bool cmp(pair<int,int>&a,pair<int,int>&b){
    if(a.second==b.second){
        return a.first>b.first;
    }
    return a.second<b.second;
}
    int LargButMinFreq(int arr[], int n) {
        // code here
        unordered_map<int,int>mp;
        for(int i=0;i<n;i++){
            mp[arr[i]]++;
        }
        vector<pair<int,int>>vp;
        for(auto it:mp){
           
           vp.push_back({it.first,it.second});
        }
        sort(vp.begin(),vp.end(),cmp);
        return vp[0].first;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    // Iterating over testcases
    while (t--) {
        int n;
        cin >> n;

        int arr[n];

        for (int i = 0; i < n; i++) cin >> arr[i];
        Solution ob;

        cout << ob.LargButMinFreq(arr, n) << endl;
    }
}
// } Driver Code Ends