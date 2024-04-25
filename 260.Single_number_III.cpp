#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> singleNumber(vector<int>& v) {
        vector<int>ans;
        sort(v.rbegin(),v.rend());
        v.push_back(INT_MAX);
        for(int i =0;i<v.size()-1;i+=2)
        {
            if(v[i]!=v[i+1])
            {
                ans.push_back(v[i]);
                v.insert(v.begin()+i+1,v[i]);
            }
        }
        return ans;

    }
};