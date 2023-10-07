//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	// Function returns the second
	// largest elements
	int print2largest(int a[], int n) {
	   int sm=-1,fm=a[0];
	   for(int i=0;i<n;i++){
	       if(a[i]>fm) fm=a[i];
	   }
	   for(int i=0;i<n;i++){
	       if(a[i]!=fm && a[i]>sm) sm=a[i];
	   }
	   return sm;
	   
	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.print2largest(arr, n);
        cout << ans << "\n";
    }
    return 0;
}

// } Driver Code Ends