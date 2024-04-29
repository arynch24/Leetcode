#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maximumGap(vector<int>& v) {

        sort(v.begin(),v.end());
        int max=INT_MIN;
        for(int i=1;i<v.size();i++)
        {
            if(max<v[i]-v[i-1])
            max=v[i]-v[i-1];
        }
        if(v.size()<2)
        return 0;
        else
        return max;
        
    }
};