class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
        int sum = 0;
        int n=arr.size();

        
        for (int i = 0; i < n; i++) {
            sum += arr[i];
        }

        
        for (int length = 3; length <= n; length += 2) {
            for (int start = 0; start <= n - length; start++) {
                int end = start + length - 1;
                sum += accumulate(arr.begin() + start, arr.begin() + end + 1, 0);
            }
        }

        return sum;

    }
};
