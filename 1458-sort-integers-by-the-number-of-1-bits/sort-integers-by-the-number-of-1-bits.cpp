class Solution {
public:
    string toBin(int n) {
        if(n == 0) return "0";
        string res = "";
        while(n > 0) {
            res += to_string(n % 2);
            n /= 2;
        }
        reverse(res.begin(), res.end());
        return res;
    }

    vector<int> sortByBits(vector<int>& arr) {
        sort(arr.begin(), arr.end(), [&](int a, int b) {
            string x = toBin(a);
            string y = toBin(b);
            int ca = count(x.begin(), x.end(), '1');
            int cb = count(y.begin(), y.end(), '1');
            if(ca == cb)
                return a < b;
            return ca < cb;
        });

        return arr;
    }
};