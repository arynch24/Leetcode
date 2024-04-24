#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int longestMonotonicSubarray(vector<int>& v) {
        int c_dec = 1, c_inc = 1;
        int m = 1;
        int s = v.size();

        for (int i = 1; i <s; i++) {

            if (v[i] > v[i - 1]) {
                c_inc++;
                c_dec = 1;

            }

            else if (v[i] < v[i - 1]) {
                c_dec++;
                c_inc = 1;

            } else {
                c_dec = 1;
                c_inc = 1;
            }

            m = max(m, max(c_inc, c_dec));
        }
        return m;
    }
};