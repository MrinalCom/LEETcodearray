class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int n=nums.size();
        vector<int>ans;
        bool found1=false;
        int j=0;
        for(int i=0;i<n;i++){
            if(nums[i]==target){
                found1=true;
                ans.push_back(i);
                j=i;
                break;
            }

                
        
        }
        
        
        for(int i=n-1;i>=j;i--){
            if(nums[i]==target){

                ans.push_back(i);
                break;
            }
            
        }
        if(!found1){
            ans.push_back(-1);
            ans.push_back(-1);
        }
       
        
        return ans;
    }
};
