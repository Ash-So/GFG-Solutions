//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    // Function to return Breadth First Traversal of given graph.
    vector<int> bfsOfGraph(int V, vector<int> adj[]) {
        vector<int> ans;
        // for(int i=0;i<V;i++){
        //     vector<int> a=adj[i];
        //     ans.push_back(a[i]);
        // }
        
        queue<int> q;
        // for(int i=0;i<V;i++){
        //     q.push(i);
        //     for(int j=0;j<adj[i].size();i++){
        //        
        //         q.push(adj[i][j]);
        //     }
        // }
        
        // while(!q.empty()){
        //     ans.push_back(q.front());
        //     q.pop();
        // }
        
        vector<bool> visited(V, false);
        visited[0]=true;
        q.push(0);
        while(!q.empty()){
            int front= q.front();
            
            ans.push_back(front);
            q.pop();
            
            for(int v: adj[front]){
                if(!visited[v]){
                    visited[v]=true;
                    q.push(v);
                }
            }
        }
        
        return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int V, E;
        cin >> V >>

            E;

        vector<int> adj[V];

        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            // 		adj[v].push_back(u);
        }
        // string s1;
        // cin>>s1;
        Solution obj;
        vector<int> ans = obj.bfsOfGraph(V, adj);
        for (int i = 0; i < ans.size(); i++) {
            cout << ans[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends