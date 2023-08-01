class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int currentaltitude=0;
        int highestpoint=currentaltitude;
        for(int i=0;i<gain.size();i++){
            currentaltitude+=gain[i];
            highestpoint=max(currentaltitude,highestpoint);
        }
        return highestpoint;
    }
};
