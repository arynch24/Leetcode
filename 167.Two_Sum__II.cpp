#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> twoSum(vector<int>& arr, int target) {

        int start=0,end=arr.size()-1;
        vector<int>ans;
        while(start<end)
        {
            int sum=arr[start]+arr[end];
            if(sum==target)
            {
                ans.push_back(start+1);// as given in ques to start from first index
                ans.push_back(end+1);// as given in ques to start from first index
                return ans;
            }
            else if(sum>target)//so we need to decrease the value of sum
            end--;
            else
            start++;
        }
        
    return ans;
    }
};