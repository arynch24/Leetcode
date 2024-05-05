#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int numRescueBoats(vector<int>& v, int limit) {
        sort(v.begin(), v.end());
        int boats = 0;
        int start = 0, end = v.size() - 1;

        while (start <= end) {
            if (v[start] + v[end] <= limit) {
                start++;
            }
            end--;
            boats++;
        }

        return boats;
    }
};