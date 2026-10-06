class Solution {
public:
    int minAddToMakeValid(string s) {
        int n= s.size();
        stack<char> st;
        for(int i=0;i<n;i++){
            if(s[i]=='('){
                st.push('(');
            }
            else if(!st.empty() && s[i]==')' && st.top()=='('){
                st.pop();
            }
            else if(s[i]==')'){
                st.push(')');
            }
        }
        return st.size();
    }
};