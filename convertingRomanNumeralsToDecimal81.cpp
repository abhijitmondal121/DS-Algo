#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function template for C++

class Solution {
  public:
int romanToDecimal(string &str) {
       unordered_map<char , int> _map;
       _map['I'] = 1;
       _map['V'] = 5;
       _map['X'] = 10;
       _map['L'] = 50;
       _map['C'] = 100;
       _map['D'] = 500;
       _map['M'] = 1000;
       
        if(str.size() == 1){
           return _map[str[0]];
       }
       
       int i = 0;
       int ans = 0;
       
       for(int i = 0 ; i< str.size() ; i++){
           if(str[i-1]  && _map[str[i]] > _map[str[i-1]]){
               ans += _map[str[i]] - 2 * _map[str[i-1]]; // subtracting 2 time to make it even
           }else{
               ans += _map[str[i]];
           }
       }

return ans;

}
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        Solution ob;
        cout << ob.romanToDecimal(s) << endl;
    }
}  // } Driver Code Ends