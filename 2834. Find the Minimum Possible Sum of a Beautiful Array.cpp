class Solution {
public:
    long long minimumPossibleSum(int n, int target) {
        long long sum=0;
        set<int> s;
        int i=1;
        int c=0;
        while(c!=n)
        {
            if(s.count(target-i))
            {
                i++;
                continue;
            }
            sum+=i;
            s.insert(i);
            i++;
            c++;
        }
        return sum;
    }
};
