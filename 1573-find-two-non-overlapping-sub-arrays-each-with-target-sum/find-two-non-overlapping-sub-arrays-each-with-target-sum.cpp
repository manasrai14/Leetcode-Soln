class Solution {
public:
    int minSumOfLengths(vector<int>& arr, int target) {
        int n = arr.size();
        vector<int> best(n, 1e9);
        int ans = 1e9;
        int l = 0, sum = 0;
        int prev = 1e9;
        for (int r = 0; r < n; r++) {
            sum += arr[r];

            while (sum > target) {
                sum -= arr[l++];
            }
            if (sum == target) {
                int len = r - l + 1;

                if (l > 0 && best[l - 1] != 1e9)
                    ans = min(ans, len + best[l - 1]);

                prev = min(prev, len);
            }

            best[r] = prev;
        }
        return ans == 1e9 ? -1 : ans;
    }
};