class Solution {
public:
    bool canAliceWin(int n) {
        if(n < 10) return false;
        bool win = true;
        int x = 10;
        while(n >= x) {
            n -= x;
            x--;
            win = !win;
        }
        return !win;
    }
};