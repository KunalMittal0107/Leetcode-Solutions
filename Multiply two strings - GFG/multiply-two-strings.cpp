//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
 

// } Driver Code Ends
class Solution{
  public:
    /*You are required to complete below function */
    string multiplyStrings(string s1, string s2) 
    {
        string temp1="";
        string temp2="";
        if(s1[0]=='-') 
        {
            temp1="-";
            s1=s1.substr(1);
        }
        if(s2[0]=='-') 
        {
            temp2="-";
            s2=s2.substr(1);
        }
        if(temp1=="-" and temp2=="-") temp1=temp2="";
        
        int n=s1.size();
        int m=s2.size();
        string res(n+m,'0');
        for(int i=m-1;i>=0;i--)
        {
            for(int j=n-1;j>=0;j--)
            {
                int num = (s2[i]-'0')*(s1[j]-'0') + (res[i+j+1]-'0');
                res[i+j+1]= num%10 + '0';
                res[i+j]+= num/10 ;      
            }
        }
        int i=0;
        while(i<res.size() and res[i]=='0') i++;
        return temp1+temp2+res.substr(i);
    }

};

//{ Driver Code Starts.
 
int main() {
     
    int t;
    cin>>t;
    while(t--)
    {
    	string a;
    	string b;
    	cin>>a>>b;
    	Solution obj;
    	cout<<obj.multiplyStrings(a,b)<<endl;
    }
     
}
// } Driver Code Ends