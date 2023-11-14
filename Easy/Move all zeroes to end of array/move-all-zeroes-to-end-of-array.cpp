//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++
class Solution{
public:
	void pushZerosToEnd(int nums[], int n) {
	    // //  Brute 
        // // n: nums.size() x: temp.size() TC: O(n)+O(x)+O(n-x) = O(2n)  SC: O(n)
        // vector<int> temp;
        // int n=nums.size();
        // for(int i=0;i<n;i++){
        //     if(nums[i]!=0) temp.push_back(nums[i]);
        // }
        // for(int i=0;i<temp.size();i++){
        //     nums[i]=temp[i];
        // }
        // for(int i= temp.size();i<n;i++){
        //     nums[i]=0;
        // }

        // Optimised : 2 pointer
        // TC: O(x)+O(n-x) = O(n) SC: O(1) 
        // int n=nums.size();
        int j=-1;
        for(int i=0;i<n;i++){
            if(nums[i]==0){
                j=i;
                break;
            }
        }
        if(j==-1) return;
        
        for(int i=j+1;i<n;i++){
            if(nums[i]!=0){
                swap(nums[i],nums[j]);
                j++;
            }
        }
	}
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int arr[n];
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        ob.pushZerosToEnd(arr, n);
        for (i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}
// } Driver Code Ends