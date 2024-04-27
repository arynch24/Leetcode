#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int singleNumber(vector<int>& v) {
        int ans = 0;
        multiset<int> ms(v.begin(), v.end());
        for (int i = 0; i < v.size(); i++) {
            if (ms.count(v[i]) == 1) {
                ans = v[i];
                break;
            }
        }
        return ans;
    }
};