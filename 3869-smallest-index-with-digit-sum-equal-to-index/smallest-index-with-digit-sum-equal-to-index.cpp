class Solution {
public:
    int sumOfDigi(int m){
        int sum=0;
        while(m>0){
            sum+=(m%10);
            m=m/10;
        }
        return sum;
    }
    int smallestIndex(vector<int>& nums) {
        for(int i=0;i<nums.size();i++){
            if(i==sumOfDigi(nums[i])) return i;
        }

        return -1;
    }
};