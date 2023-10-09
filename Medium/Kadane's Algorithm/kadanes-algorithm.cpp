//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    // arr: input array
    // n: size of array
    //Function to find the sum of contiguous subarray with maximum sum.
    long long maxSubarraySum(int arr[], int n){
        int s=0, start=0, end=0;
        long long max=INT_MIN, sum=0;

        for(long long i=0;i<n;i++){
            sum+=arr[i];
            if(max<sum){
                max=sum;
                start=s;
                end=i;
            }
            if(sum<0){
                sum=0;
                s=i+1;
            }
        }
        
        // cout<<start<<" "<<end; gives the index from where to where
        return max;
    }
};

//{ Driver Code Starts.

int main()
{
    int t,n;
    
    cin>>t; //input testcases
    while(t--) //while testcases exist
    {
        
        cin>>n; //input size of array
        
        int a[n];
        
        for(int i=0;i<n;i++)
            cin>>a[i]; //inputting elements of array
            
        Solution ob;
        
        cout << ob.maxSubarraySum(a, n) << endl;
    }
}

// } Driver Code Ends