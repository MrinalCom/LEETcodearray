class Solution {
public:
    int maximizeSum(vector<int>& nums, int k) {
        
        int ans=*max_element(nums.begin(),nums.end());
        return ans*k+(k*(k-1))/2;
    }
};
