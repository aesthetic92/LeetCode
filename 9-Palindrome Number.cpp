class Solution {
public:
    bool isPalindrome(int x) {
        if(x < 0) {
            return false;
        }
        
        int q = 1;
        while(x / q >= 10) {
            q *= 10;
        }
        
        while(x > 0) {
            int r = x % 10;
            int p = x / q;
            if(r != p) {
                return false;
            }
            x = x % q / 10;
            q /= 100;
        }
        return true;
    }
};