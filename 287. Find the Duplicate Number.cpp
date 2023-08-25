class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        set<int>s;
        int dub=-1;
        for(int i=0;i<nums.size();i++){
            if(s.find(nums[i]) != s.end()) {
                dub = nums[i];
                break; 
            }
            s.insert(nums[i]);

        }
        

        return dub;
    }
};
