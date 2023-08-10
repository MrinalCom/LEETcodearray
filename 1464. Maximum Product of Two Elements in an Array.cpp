class Solution {
public:
    int maxProduct(vector<int>& nums) {
        
        
        int n=nums.size()-1;
        int maxi1=*max_element(nums.begin(),nums.end());
        sort(nums.begin(),nums.end());
        int maxi2=nums[n-1];
       
       return (maxi2-1)*(maxi1-1);
    }
};
