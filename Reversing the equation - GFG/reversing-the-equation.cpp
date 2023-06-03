//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
  public:
    string reverseEqn (string s)
        {
            //code here.
            string str="";
            string temp="";
            for(int i=s.size()-1;i>=0;i--){
                if(s[i]=='+' || s[i]=='-' || s[i]=='*' || s[i]=='/'){
                    str+=temp;
                    str+=s[i];
                    temp="";
                }else{
                    temp=s[i]+temp;
                }
            }
            str+=temp;
            return str;
        }
};

//{ Driver Code Starts.
int main()
{
    int t; cin >> t;
    while (t--)
    {
        string s; cin >> s;
        Solution ob;
        cout <<ob.reverseEqn (s) << endl;
    }
}
// Contributed By: Pranay Bansal

// } Driver Code Ends