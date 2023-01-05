//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution
{
public:
bool ispresent(string str,unordered_map<string,int>&mp)
{
    string temp="";
    for (int i=0;i<str.length();i++)
    {
        temp+=str[i];
        if(!mp[temp])return false;
    }
    return true;
}
    string longestString(vector<string> &words)
    {
        // code here
        string ans="";
        unordered_map<string,int>mp;
        for(auto i:words)
        {
            mp[i]++;
        }
        for(string x:words)
        {
            if(ispresent(x,mp))
            {
                if(x.length()>ans.length())
                {
                    ans=x;
                }
                else if(x.length()==ans.length())
                {
                    ans=min(x,ans);
                }
            }
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<string> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        Solution obj;
        string w = obj.longestString(v);
        cout << w << "\n";
    }
    return 0;
}

// } Driver Code Ends