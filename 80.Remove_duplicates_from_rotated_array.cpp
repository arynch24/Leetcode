#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& v) {
        int count=1;
        for(int i=0;i<v.size()-1;i++)
        {
            if(v[i]==v[i+1])
            {
                count++;
                if(count>2)
                {
                    v.erase(v.begin()+i);
                    i--;
                }
            }
            else
            count=1;
        }
        return v.size();
    }
};