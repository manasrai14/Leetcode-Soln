class Solution {
public:
    double getNo(char c){
        if(c=='?'){
            return 4.5;
        }
        else{
            return c-'0';
        }
    }
    bool sumGame(string num) {
        int n= num.size();
        double LSum=0.0;
        double RSum=0.0;

        for(int i=0;i<n/2;i++){
            LSum+=getNo(num[i]);
        }
        for(int j=n/2;j<n;j++){
            RSum+=getNo(num[j]);
        }
        return LSum!=RSum;
    }
};