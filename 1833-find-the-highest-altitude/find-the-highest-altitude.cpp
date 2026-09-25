class Solution {
public:
    int findMax(vector<int>& res){
        int maxm=INT_MIN;
        for(int i=0;i<res.size();i++){
            maxm=max(res[i],maxm);
        }
        return maxm;
    }
    int largestAltitude(vector<int>& gain) {
        int n= gain.size();
        vector<int>ans(n+1);
        ans[0]=0;
        for(int i=1;i<=n;i++){
            ans[i]=gain[i-1]+ans[i-1];
        }

        int MaxmAlt= findMax(ans);

        return MaxmAlt;
    }
};