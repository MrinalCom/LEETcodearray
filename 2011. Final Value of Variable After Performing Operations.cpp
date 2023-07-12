class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int count =0;
        int n=operations.size();
        for(int i=0;i<n;i++){
            if(operations[i]=="--X" || operations[i]=="X--"){
                count=count-1;
            }
             if(operations[i]=="++X" || operations[i]=="X++"){
                count=count+1;
            }
        }
        return count;
    }
};
