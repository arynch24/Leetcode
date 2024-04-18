#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
     
    sort(nums.begin(), nums.end());
    
    int index = 0;

    nums.push_back(INT_MAX);//to not face any problem with last element
    vector<int> ans;

    for (int i = 0; i < nums.size()-1 ; i++)
    {
        if (nums[i] != nums[i + 1])
        {
            if ((i+1 - index) > ((nums.size()-1 )/ 3))
            {
                ans.push_back(nums[i]);
            }

            index = i+1;//update foe next  sequence of numbers.
        }
    }
    return ans;
    }
};