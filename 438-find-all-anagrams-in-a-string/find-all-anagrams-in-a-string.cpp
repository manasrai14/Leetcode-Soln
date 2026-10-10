class Solution {
public:
    bool isAnagram(string a, string b){
        if (a.size() != b.size()) return false;
        int freq[26] = {0};
        for (int i = 0; i < a.size(); i++) {
            freq[a[i] - 'a']++;
            freq[b[i] - 'a']--;
        }
        for (int i = 0; i < 26; i++) {
            if (freq[i] != 0) return false;
        }
        return true;

    }
    vector<int> findAnagrams(string s, string p) {
        int left=0;
        string ans="";
        vector<int>res;
        for(int r=0;r<s.size();r++){
            ans+=s[r];
            while(ans.size()>p.size()){
                left++;
                ans.erase(ans.begin());
            }
            if(ans.size() == p.size() && isAnagram(ans,p)){
                res.push_back(left);
            }
        }
        return res;
    }
};