#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int fib(int n) {
        

        vector<int> v(n+2);
        v[0]=0;
        v[1]=1;
        int ans=0;
        for (int i = 2; i <= n; i++) {
            v[i] = v[i - 1] + v[i - 2];
        }
        return v[n];
    }
};