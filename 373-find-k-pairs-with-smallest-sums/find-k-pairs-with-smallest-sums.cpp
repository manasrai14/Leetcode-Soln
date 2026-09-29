class Solution {
public:
    vector<vector<int>> kSmallestPairs(vector<int>& nums1, vector<int>& nums2, int k) {
        vector<vector<int>> ans;
        
        priority_queue<
            pair<int,pair<int,int>>,
            vector<pair<int,pair<int,int>>>,
            greater<pair<int,pair<int,int>>>
        > pq;
        int n = nums1.size();
        int m = nums2.size();
        for(int i = 0; i < min(n,k); i++) {
            pq.push({nums1[i] + nums2[0], {i,0}});
        }

        while(k-- && !pq.empty()) {
            auto top = pq.top();
            pq.pop();

            int i = top.second.first;
            int j = top.second.second;

            ans.push_back({nums1[i], nums2[j]});

            if(j + 1 < m) {
                pq.push({nums1[i] + nums2[j+1], {i,j+1}});
            }
        }
        return ans;
    }
};