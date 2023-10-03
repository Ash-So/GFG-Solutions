//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    string longestPalin (string s) {
        int n = s.length();
    int start = 0, end = 1;
    int low, hi;
 
    for (int i = 0; i < n; i++) {
 
        low = i - 1;
        hi = i;
 
        while (low >= 0 && hi < n && s[low] == s[hi]) {
 
            if (hi - low + 1 > end) {
                start = low;
                end = hi - low + 1;
            }
            low--;
            hi++;
        }
 
        low = i - 1;
        hi = i + 1;
 
        while (low >= 0 && hi < n && s[low] == s[hi]) {
 
            if (hi - low + 1 > end) {
                start = low;
                end = hi - low + 1;
               
            }
               low--;
            hi++;
        }
    }
    string ans="";
    for(int i=start;i<=start+end-1;i++){
            ans+=s[i];
        }
    return ans;
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