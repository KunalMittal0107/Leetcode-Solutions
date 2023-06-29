//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std;

// } Driver Code Ends
class Solution{
public:
 bool isHappy(int n) {
       set<int>st;
       while(true){
           int ans=0;
           while(n>0){
             int index=n%10;
             ans+=(index*index);
             n/=10;
           }
           if(ans==1){
               return 1;
           }
           if(st.find(ans)!=st.end()){
               return 0;
           }else{
               st.insert(ans);
           }
           n=ans;
       } 
    }
    int nextHappy(int N){
        // code here
        N++;
        while(isHappy(N)==0){
            N++;
        }
        return N;
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin>>N;
        Solution ob;
        cout << ob.nextHappy(N) << endl;
    }
    return 0; 
}
// } Driver Code Ends