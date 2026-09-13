class Solution {
public:
    string removeDuplicateLetters(string s) {
        unordered_map<char,int> mpp;
        for(char c: s){
            mpp[c]++;
        }

        stack<char> st;
        set<char> used;

        for(int i=0;i<s.size();i++){
            mpp[s[i]]--;
            if(used.find(s[i]) != used.end()){
                continue;
            }
            while(!st.empty() && st.top()>s[i] && mpp[st.top()]>0){
                used.erase(st.top());
                st.pop();
            }
            st.push(s[i]);
            used.insert(s[i]);
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