class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        int n=arr.size();
        vector<vector<int>>ans;
        int minDiff = INT_MAX;
        for(int i=0;i<n-1;i++){
            int diff=abs(arr[i]-arr[i+1]);
            if(diff<minDiff){
                minDiff=diff;
                ans.clear();
                ans.push_back({arr[i],arr[i+1]});
            }
            else if(diff==minDiff){
                ans.push_back({arr[i],arr[i+1]});
            }
        }
    
  
        return ans;
    }
};
