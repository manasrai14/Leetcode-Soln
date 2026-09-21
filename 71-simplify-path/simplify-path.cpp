class Solution {
public:
    string simplifyPath(string path) {
        stack<string> st;
        string temp="";

        for(int i=0;i<path.length();i++){
            if(path[i]=='/'){
                if(temp == "."){
                }
                else if(temp == ".."){
                    if(!st.empty()) st.pop();
                }
                else if(temp != ""){
                    st.push(temp);
                }
                temp="";
            }
            else{
                temp+=path[i];
            }
        }

        if(temp == "..") {
            if(!st.empty()) st.pop();
        }
        else if(temp != "" && temp != ".") {
            st.push(temp);
        }


        string ans="";
        while(!st.empty()){
            ans = "/" + st.top() + ans;
            st.pop();
        }

        if(ans.empty()) return ans+='/';

        return ans;
    }
};