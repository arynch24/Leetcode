#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int search(vector<int>& arr, int target) {
        int start=0,end=arr.size()-1,mid;
    int ans=-1;//when target value is not found.
    while(start<=end)
    {
        mid=start+(end-start)/2;

        if(arr[mid]==target)
        return mid;
    
        else if(arr[mid]>=arr[0] )//mtlb left side sorted hoga
        {
            if(arr[mid]>=target && arr[0]<=target)//true than search left side init
            end=mid-1;
            else//right sie search karo
            start=mid+1;
        }
      
        else//yah pe right side sorted hoga
        {
            if(arr[mid]<=target && arr[end]>=target)//right side me dhundo
            start=mid+1;
            else//left side me dekho
            end=mid-1;
        }
        
    }
    return ans;
    }
};