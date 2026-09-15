class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        for(int i=0;i<nums.size();i++){
            int cnt=1;
            for(int j=i+1;j<nums.size();j++){
                if(nums[i]==nums[j]){
                    cnt++;
                    if(cnt>2){
                    nums.erase(nums.begin()+j);
                    j--;
                   }
                }    
            }
        }

        return nums.size();
    }
};