#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string triangleType(vector<int>& v) {
        string ans="none";
        
            
        sort(v.begin(), v.end());
        v.push_back(INT_MAX);

        int count = 0;
        for (int i = 0; i < v.size() - 1; i++) {
            if (v[i] == v[i + 1])
                count++;
        }

        if (v[0] < v[1] + v[2] && v[1] < v[0] + v[2] && v[2] < v[1] + v[0]) {
            if (count == 1)
                ans = "isosceles";
            else if (count == 2)
                ans = "equilateral";
            else if (count == 0)
                ans = "scalene";
        }

        return ans;
    }
};