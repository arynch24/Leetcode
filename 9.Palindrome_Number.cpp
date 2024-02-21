#include <bits/stdc++.h>
class Solution {
public:
    bool isPalindrome(int x) {
        int ld,rev=0;
        int z=x;
        if (x<0)
        return false;
        while (x!=0)
        {
            ld=x%10;
            x/=10;
            if (rev>INT_MAX/10 or rev<INT_MIN/10)
            return 0;

            rev=rev*10+ld;
        }
        if(rev==z)
        return true;

        else
        return false;
    }
};