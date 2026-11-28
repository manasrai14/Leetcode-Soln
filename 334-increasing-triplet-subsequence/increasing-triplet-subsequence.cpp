class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        int minim1= INT_MAX;
        int minim2= INT_MAX;
        for(int i=0;i<nums.size();i++){
            if(nums[i]<=minim1){
                minim1= nums[i];
            }
            else if(nums[i]<=minim2){
                minim2=nums[i];
            }
            else{
                return true;
            }
        }
        return false;
    }
};