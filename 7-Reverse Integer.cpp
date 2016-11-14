class Solution {
public:
    int reverse(int x) {
        int cnt = 0;
        for(; x; x /= 10) {
            cnt = cnt * 10 + x % 10;
        }
        return cnt;
    }
};