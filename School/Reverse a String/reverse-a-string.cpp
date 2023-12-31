//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

// Not the optimized solution
// class Solution {
//   public:
//     string revStr(string S) {
//         for(int i=S.size();i>=0;i--){
//             s+=S[i];
//         }
//         return s;
//     }
// };

// Optimized solution
class Solution {
  public:
    string revStr(string S) {
        for(int i=0;i<S.size()/2;i++){
            swap(S[i],S[S.size()-1-i]);
        }
        return S;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string S;
        cin >> S;
        Solution ob;
        cout << ob.revStr(S) << endl;
    }
    return 0;
}

// } Driver Code Ends
