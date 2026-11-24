class Solution {
public:
    int maxLength(vector<int>& nums) {
        int n = nums.size();
        int ans = 0;
        for (int i = 0; i < n; i++) {
            long long pdt = 1, g = 0, l = 1;
            for (int j = i; j < n; j++) {
                int x = nums[j];
                g = gcd(g, (long long)x);
                l = l / gcd(l, (long long)x) * x;
                if (pdt > LLONG_MAX / x)
                    break;
                pdt *= x;
                if (pdt == l * g)
                    ans = max(ans, j - i + 1);
            }
        }
        return ans;
    }
};