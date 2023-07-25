class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        
        string ans(s.length(),' '); 
        int n = s.length();
        
        for (int i = 0; i < n; i++) {
            ans[indices[i]] = s[i]; 
        }
        
        return ans;
            

        
      
        
    }
};
