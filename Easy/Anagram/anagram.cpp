//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// Map Approach
class Solution
{
    public:
    //Function is to check whether two strings are anagram of each other or not.
    bool isAnagram(string a, string b){
        if(a.length() != b.length()) return false;
        
        unordered_map<int,int> mp;
        for(int i=0;i<a.length();i++){
            mp[a[i]]++;
        }
        
        for(int i=0;i<b.length();i++){
            if(mp.find(b[i]) != mp.end()) mp[b[i]]--;
            else return false;
        }
        
        for(auto items: mp){
            if(items.second != 0){
                return false;
            }
        }
        return true;
    }

};

// Another approach - Frequency array
// class Solution
// {
//     public:
//     //Function is to check whether two strings are anagram of each other or not.
//     bool isAnagram(string a, string b){
//         if(a.length() != b.length()) return false;
//         int freq[26]={0};
//         for(int j=0;j<a.size();j++){
//             freq[str[j]-'a']++;
//         }
//         for(int j=0;j<b.size();j++){
//             freq[str[j]-'a']++;
//         }
//         for(int i=;i<26;i++){
//             if(freq[i]!=0) return false;
//         }
//         return true;
//     }

// };

//{ Driver Code Starts.

int main() {
    
    int t;

    cin >> t;

    while(t--){
        string c, d;

        cin >> c >> d;
        Solution obj;
        if(obj.isAnagram(c, d)) cout << "YES" << endl;
        else cout << "NO" << endl;
    }

}

// } Driver Code Ends
