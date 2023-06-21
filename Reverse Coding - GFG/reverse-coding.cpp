//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
  const int mod=1e9+7;
    int sumOfNaturals(int n) {
        // code here
        long long n2=n+1;
        if(n%2==0){
            n/=2;
        }else{
            n2/=2;
        }
        long long ans=((n%mod)*(n2%mod))%mod;
        return (int)ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        
        cin>>n;

        Solution ob;
        cout << ob.sumOfNaturals(n) << endl;
    }
    return 0;
}
// } Driver Code Ends