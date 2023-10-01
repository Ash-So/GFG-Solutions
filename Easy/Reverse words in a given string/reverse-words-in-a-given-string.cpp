//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

// Split Logic
class Solution
{
    public:
    //Function to reverse words in a given string.
    string reverseWords(string S) 
    { 
        stack<string> s;
        string ans="";
        
        for(int i=0;i<S.size();i++){
            if(S[i]=='.'){
                s.push(ans);
                ans="";
            }
            else{
                ans+=S[i];
            }
        }
        s.push(ans);
        string res;
        while(!s.empty()){
            res+=s.top()+".";
            s.pop();
        }
        res.pop_back();
        return res;
    } 
};

//{ Driver Code Starts.
int main() 
{
    int t;
    cin >> t;
    while (t--) 
    {
        string s;
        cin >> s;
        Solution obj;
        cout<<obj.reverseWords(s)<<endl;
    }
}
// } Driver Code Ends