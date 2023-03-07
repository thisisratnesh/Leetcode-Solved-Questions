//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    //Function is to check whether two strings are anagram of each other or not.
    bool isAnagram(string a, string b){
        
        // Your code here
        long int x=0;
        long int y=0;
        int h[26]={0};
        if(a.size()!=b.size())
        {
            return 0;
        }
        for(int i=0;a[i]!='\0';i++)
        {
            h[a[i]-97]++;
        }
        for(int i=0;b[i]!='\0';i++)
        {
            h[b[i]-97]--;
            if(h[b[i]-97]<0)return 0;
        }
        return 1;
        
        
    }

};

//{ Driver Code Starts.

int main() {
    
    int t;

    cin >> t;

    while(t--){
        string c, d;

        cin >> c >> d;
        Solution obj;
        if(obj.isAnagram(c, d)) cout << "YES" << endl;
        else cout << "NO" << endl;
    }

}

// } Driver Code Ends