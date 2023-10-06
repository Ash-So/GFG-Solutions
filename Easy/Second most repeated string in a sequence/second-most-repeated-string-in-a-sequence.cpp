//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
  public:
    string secFrequent (string arr[], int n)
    {
        unordered_map<string,int> mp;
        
        for(int i=0;i<n;i++){
            mp[arr[i]]++;
        }
        
        int fm=0, sm=0;
        string ans="";
        for(auto it=mp.begin();it!=mp.end();it++){
            if(it->second > fm){
                sm=fm;
                fm=it->second;
            }
            else if(it->second > sm && it->second != fm){
                sm=it->second;
            }
        }
        for(auto it=mp.begin();it!=mp.end();it++){
            if(it->second==sm) ans+=it->first;
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
        int n; cin >> n;
        string arr[n];
        for (int i = 0; i < n; ++i)
            cin >> arr[i];
        Solution ob;
        cout << ob.secFrequent (arr, n) << endl;
    }
}
// Contributed By: Pranay Bansal

// } Driver Code Ends