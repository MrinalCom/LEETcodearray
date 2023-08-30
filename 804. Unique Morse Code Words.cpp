class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        string a[27]={".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
    set<string>S;
    for(int i=0;i<words.size();i++){
        string curr="";
        for(auto c:words[i]){
            curr+=a[c-'a'];
        }
        S.insert(curr);
    }
    return S.size();
    
    }
};
