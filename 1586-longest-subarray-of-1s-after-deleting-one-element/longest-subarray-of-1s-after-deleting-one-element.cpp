class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int n=nums.size();
        int k=1;
        int zeros=0;
        int maxLen=0;
        int l=0;
        int r=0;
        while(r<n){
            if(nums[r]==0){
                zeros++;
            }
            if(zeros>k){
                if(nums[l]==0){
                    zeros--;  
                }
                l++;
            }
            maxLen=max(maxLen,r-l+1);
            r++;
        }
        return maxLen-1;
    }
};