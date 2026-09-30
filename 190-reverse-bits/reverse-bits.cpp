class Solution {
public:
    string toBin(int a){
        string res="";
        while(a>0){
            int last=a%2;
            res+=to_string(last);
            a=a/2;
        }
        reverse(res.begin(),res.end());

        while (res.size() < 32){
            res = "0" + res;
        }

        return res;
    }
    int reverseBits(int n) {
        string ans= toBin(n);
        reverse(ans.begin(),ans.end());

        return stoi(ans, nullptr, 2);
    }
};