//binary search hint ---
//comntinuous allocation and find minimum or maximum from that.
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int shipWithinDays(vector<int>& arr, int days) {
        int start=0,end=0,mid;
        int ans;
        for(int i=0;i<arr.size();i++)
        {
            start=max(start,arr[i]);
            end+=arr[i];
        }
        while(start<=end)
        {
            mid=start+(end-start)/2;
            int count_day=1;//allocate packages to different count_day
            int weights=0;//weight on different count_day
            for(int i=0;i<arr.size();i++)
            {
                weights+=arr[i];
                if(weights>mid)
                {
                    count_day++;
                    weights=arr[i];
                }
            }

            if(count_day<=days)
            {
                ans=mid;
                end=mid-1;
            }
            else
            start=mid+1;
        }
        return ans;
    }
};