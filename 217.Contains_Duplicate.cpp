#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool containsDuplicate(vector<int>& v) {
        sort(v.begin(),v.end());
        
        for(int i=1;i<v.size();i++)
        {
            if(v[i-1]==v[i])
            return true;
        }
        return false;
    }

};