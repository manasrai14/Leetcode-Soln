class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& points) {
        if(points.empty()) return 0;
        sort(points.begin(),points.end());
        int start= points[0][1];
        int cnt=1;
        for(int i=1;i<points.size();i++){
            if(points[i][0]<=start){
                start=min(start,points[i][1]);
            }
            else{
                cnt++;
                start=points[i][1];
            }
        }
        return cnt;
    }
};