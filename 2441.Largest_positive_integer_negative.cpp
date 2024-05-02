#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findMaxK(vector<int>& v) {
        int ans = -1;
        sort(v.rbegin(), v.rend());
        for (int i = 0; i < v.size(); i++) {
            for (int j = 0; j < v.size(), j != i; j++) {
                if (v[i] == -v[j]) {
                    if (v[i] < 0)
                        ans = -v[i];
                    break;
                }
            }
        }
        return ans;
    }
};