#include <iostream>
using namespace std;
class Solution {
public:
    int mySqrt(int x) {
        if(x<2)
        return x;
        int ans;
        int start = 0, end = x, mid;
        while (start <= end) {
            mid = start + (end - start) / 2;
            if (mid  == x/mid) {
                ans = mid;
                break;
            }
            // left
            else if (mid  > x/mid)
                end = mid - 1;
            else {
                // right
                ans = mid; // just less
                start = mid + 1;
            }
        }
        return ans;
    }
};