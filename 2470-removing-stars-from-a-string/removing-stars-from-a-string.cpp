class Solution {
public:
    string removeStars(string s) {
        stack<int> st;
        for(int i=0;i<s.size();i++){
            if(!st.empty() && s[i]=='*'){
                st.pop();
            }
            else{
                st.push(s[i]);
            }
        }

        string res="";
        while(!st.empty()){
            res+=st.top();
            st.pop();
        }

        reverse(res.begin(),res.end());

        return res;
    }
};