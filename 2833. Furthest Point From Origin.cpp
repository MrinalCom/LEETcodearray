class Solution {
public:
    int furthestDistanceFromOrigin(string moves) {
        int n=moves.length();
        int Lcount=0;
        int Rcount=0;
        int count=0;
        for(int i=0;i<n;i++){
            if(moves[i]=='L'){
                Lcount++;
            }
            else if(moves[i]=='R'){
                Rcount++;
            }
            
        }
        for(int i=0;i<n;i++){
            if(Lcount>Rcount){
                if(moves[i]=='_'){
                    moves[i]='L';
                }
                
            }
            else if(Rcount>Lcount){
                if(moves[i]=='_'){
                    moves[i]='R';
                }
                
            }
        }
        for(int i=0;i<n;i++){
            if(moves[i]=='R'){
                count++;
            }
            else
                count--;
        }
        return abs(count);
    }
};
