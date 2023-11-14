//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    //arr1,arr2 : the arrays
    // n, m: size of arrays
    //Function to return a list containing the union of the two arrays. 
    vector<int> findUnion(int a[], int b[], int n, int m)
    {
        // TC: O(n+m)  SC: O(n+m)
        int i=0, j=0;
        vector<int> unionArr;
        
        while(i<n && j<m){
            if(a[i]<=b[j]){
                if(unionArr.size() == 0 ||unionArr.back() != a[i]){
                    unionArr.push_back(a[i]);
                }
                i++;
            }
            else{
                if(unionArr.size() == 0 ||unionArr.back() != b[j]){
                    unionArr.push_back(b[j]);
                }
                j++;
            }
        }
        
        while(j<m){
            if(unionArr.size() == 0 ||unionArr.back() != b[j]){
                    unionArr.push_back(b[j]);
            }
            j++;
        }
        
        while(i<n){
            if(unionArr.size() == 0 ||unionArr.back() != a[i]){
                    unionArr.push_back(a[i]);
            }
            i++;
        }
        
        return unionArr;
        
    }
};

//{ Driver Code Starts.

int main() {
	
	int T;
	cin >> T;
	
	while(T--){
	    
	    
	    
	    int N, M;
	    cin >>N >> M;
	    
	    int arr1[N];
	    int arr2[M];
	    
	    for(int i = 0;i<N;i++){
	        cin >> arr1[i];
	    }
	    
	    for(int i = 0;i<M;i++){
	        cin >> arr2[i];
	    }
	    Solution ob;
	    vector<int> ans = ob.findUnion(arr1,arr2, N, M);
	    for(int i: ans)cout<<i<<' ';
	    cout << endl;
	    
	}
	
	return 0;
}
// } Driver Code Ends