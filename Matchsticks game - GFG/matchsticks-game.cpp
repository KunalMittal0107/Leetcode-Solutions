//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    int matchGame(long long n) {
        // code here
        if(n<=4){
            return n;
        }
        if(n%5==0){
            return -1;
        }
        if((n-4)%5==0){
            return 4;
        }
        if((n-3)%5==0){
            return 3;
        }
        if((n-2)%5==0){
            return 2;
        }
        if((n-1)%5==0){
            return 1;
        }
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long N;
        
        cin>>N;

        Solution ob;
        cout << ob.matchGame(N) << endl;
    }
    return 0;
}
// } Driver Code Ends