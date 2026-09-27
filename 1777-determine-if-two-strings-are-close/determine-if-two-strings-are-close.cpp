class Solution {
public:
    bool closeStrings(string word1, string word2) {
        unordered_map<char,int> mpp1;
        unordered_map<char,int>mpp2;
        for(char c1: word1){
            mpp1[c1]++;
        }
        for(char c2: word2){
            mpp2[c2]++;
        }

        vector<int> arr1;
        for(auto &it: mpp1){
            arr1.push_back(it.second);
        }

        vector<int> arr2;
        for(auto &it: mpp2){
            arr2.push_back(it.second);
        }

        if(mpp1.size() != mpp2.size())
        return false;

        for(auto &it : mpp1){
            if(mpp2.find(it.first) == mpp2.end())
                return false;
        }

        sort(arr1.begin(),arr1.end());
        sort(arr2.begin(),arr2.end());

        return arr1 == arr2;

    }
};