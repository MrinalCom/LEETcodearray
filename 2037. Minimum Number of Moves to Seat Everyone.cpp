class Solution {
public:
    int minMovesToSeat(vector<int>& seats, vector<int>& students) {
        int n=students.size();
        int m=seats.size();
        sort(seats.begin(),seats.end());
        sort(students.begin(),students.end());
        int mid;
        int ans=0;
        for(int i=0;i<n;i++){
            
            
            mid=abs(students[i]-seats[i]);
            ans+=mid;

            
        }
        return ans;
    }
};
