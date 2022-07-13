//Initial template for C++

#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

class Solution{
  public:
  int dp[1001][1001];
    int f(int i,int j,string x,string y)
    {
        if(i==0||j==0)
        return 0;
        else if(dp[i][j]!=-1)
        return dp[i][j];
        int a=0;
        if(x[i-1]==y[j-1])
        a=1+f(i-1,j-1,x,y);
        else
        {
            a = max(f(i-1,j,x,y),f(i,j-1,x,y));
        }
        return dp[i][j]=a;
    }
    int longestPalinSubseq(string A) {
        //code here
        memset(dp,-1,sizeof(dp));
        string b = A;
        reverse(b.begin(),b.end());
        return f(A.size(),b.size(),A,b);
    }
};

// { Driver Code Starts.

int32_t main()
{
    int t; cin >> t;
    while (t--)
    {
        string s; cin >> s;
        Solution ob;
        cout << ob.longestPalinSubseq(s) << endl;
    }
}
// Contributed By: Pranay Bansal
  // } Driver Code Ends
