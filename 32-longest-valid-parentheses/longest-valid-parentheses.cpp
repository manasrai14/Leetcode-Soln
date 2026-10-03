class Solution {
public:
    int longestValidParentheses(string s) {
        int n=s.size();
        vector<int> ans;
        ans.push_back(-1);
        int maxm=0;
        for(int i=0;i<n;i++){
            if(s[i]=='('){
                ans.push_back(i);
            }
            else{
                ans.pop_back();

                if(ans.empty()){
                    ans.push_back(i);
                }
                else{
                    maxm=max(maxm, i-ans.back());
                }
            }
        }
        return maxm;
    }
};