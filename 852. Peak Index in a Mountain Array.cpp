class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        
       int i = 0;
        while (i < arr.size() - 1) {
            if (arr[i + 1] > arr[i]) {
                i++;
            } else {
                break; 
            }
        }
        return i;
    }
};
