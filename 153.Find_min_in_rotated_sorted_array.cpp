
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findMin(vector<int>& nums) {
    int start=0,end=nums.size()-1,mid;
    int ans=nums[0];
    while(start<=end)
    {
        mid=start+(end-start)/2;
        //searching right side 
        if(nums[mid]>=nums[0])
        start=mid+1;
        //searching left side
        else
        {
            ans=nums[mid];
            end=mid-1;
        }
    }
    return ans;
    }
};