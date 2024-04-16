#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int removeDuplicates(vector<int>& v) {
        vector<int>ans;
        int count=0;
        for(int i=0;i<v.size()-1;i++)
        {
            if(v[i]!=v[i+1])
            ans.push_back(v[i]);
        }
        if (!v.empty()) {
            ans.push_back(v.back()); // Add the last element
        }
        v = ans; // Update the original vector
        return ans.size();
    }
};