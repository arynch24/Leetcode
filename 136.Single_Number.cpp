#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int singleNumber(vector<int>& v) {
        sort(v.begin(),v.end());
        int ans;
        v.push_back(INT_MAX);
        for(int i=0;i<v.size()-1;i+=2)
        {
            if(v[i]!=v[i+1])
            {
                ans=v[i];
                break;
            }
        }
        return ans;

    }
};