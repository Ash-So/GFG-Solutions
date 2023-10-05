//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    int longestUniqueSubsttr(string S){
       int count[256]={0};
       int l=0, r=0;
       int ans=0;
       
       while(r<S.size()){
           count[S[r]]++;
           
           while(count[S[r]]>1){
               count[S[l]]--;
               l++;
           }
           
           ans=max(ans, r-l+1);
           r++;
       }
       return ans;
    }
};

//{ Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string str;
		cin>>str;
		Solution ob;
		cout<<ob.longestUniqueSubsttr(str)<<endl;
	}
	return 0;
}
// } Driver Code Ends