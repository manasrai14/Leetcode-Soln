class Solution {
public:
    long sumOfSq(int m){
        long sum=0;
        while(m>0){
            int last= m%10;
            sum+=(last*last);
            m=m/10;
        }
        return sum;
    }
    bool isHappy(int n) {
        if(n==1) return true;
        if(n==7) return true;
        while(n>9){
            long sum=sumOfSq(n);
            if(sum==1) return true;
            if(sum==7) return true;
            n=sum;
        }
        return false; 
    }
};