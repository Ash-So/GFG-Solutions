//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    //Function to check if a string can be obtained by rotating
    //another string by exactly 2 places.
    bool isRotated(string str1, string str2)
    {
        bool cw=true, acw=true;
        if(str1.size()!=str2.size()) return false;
        
        for(int i=0;i<str1.size();i++){
            if(str1[i]!=str2[(i+2)%str2.size()]) cw=false; 
            if(str1[(i+2)%str1.size()]!=str2[i]) acw=false;
        }
        return cw || acw;
    }

};


//{ Driver Code Starts.

int main() {
	
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		string b;
		cin>>s>>b;
		Solution obj;
		cout<<obj.isRotated(s,b)<<endl;
	}
	return 0;
}

// } Driver Code Ends