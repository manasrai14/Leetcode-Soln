class Solution {
public:
    bool wordPattern(string pattern, string s) {
        unordered_map<char,string> mpp;
        vector<string> ans;
        string res="";
        for(int i=0;i<s.size();i++){
            int j=i;
            while(j<s.size() && s[j] !=' '){
                res+=s[j];
                j++;
            }
            ans.push_back(res);
            res="";
            i=j;
        }
        if(pattern.size()!=ans.size()){
            return false;
        }
        unordered_map<string, char> rev;

        for(int i=0;i<pattern.size();i++){
            char ch = pattern[i];
            string word = ans[i];
            if(mpp.count(ch)) {
                if(mpp[ch] != word)
                    return false;
            }
            if(rev.count(word)) {
                if(rev[word] != ch)
                    return false;
            }

            mpp[ch] = word;
            rev[word] = ch;     
        }

        return true;
    }
};