class Solution {
public:
    int countKDifference(vector<int>& nums, int k) {
        int count=0;
        int n=nums.size();
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                int diff=abs(nums[i] - nums[j]);
                if(diff == k){
                    count++;
                }
            }
        }
        return count;
    }
};
