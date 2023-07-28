class Solution {
public:
    string truncateSentence(string s, int k) {
        int n = s.length();
        int word = 0;
        string result = "";

        for (int i = 0; i < n; i++) {
            if (s[i] == ' ') { 
                word = word + 1;
                if (word == k) {
                    break; 
                }
            }
            result += s[i]; 
        }
        
        return result;
        
    }
};
