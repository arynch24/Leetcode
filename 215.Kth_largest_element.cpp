#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findKthLargest(vector<int>& v, int k) {
        multiset<int>vector_set(v.begin(),v.end());
        auto it=vector_set.begin();
        for(int i=0 ;i<vector_set.size()-k;i++)
        it++;

        return *it;

        //TIME LIMIT EXCEEDS
        //LEARN CONCEPT AND COME BACK

        // int ans = 0;
        // while (k--) {
        //     int max = INT_MIN, index;
        //     for (int i = 0; i < v.size(); i++) {
        //         if (max < v[i]) 
        //         {
        //             max = v[i];
        //             index = i;
        //         }
        //     }
        //     ans = max;
        //     v[index]=INT_MIN;
        // }
        // return ans;
    
    }
};