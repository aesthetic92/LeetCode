class Solution {
public:
    int removeDuplicates(int A[], int n) {
        if(0 == n) {
            return 0;
        }
        int pos = 0;
        for(int i = 1; i < n; ++i) {
            if(A[pos] != A[i]) {
                A[++pos] = A[i];
            }
        }
        return pos + 1;
    }
};