#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int j = 0;
        int size = nums.size();
        for (int i = 0; i <size; i++) {
            if (nums[i + j] == val) {
                nums.erase(nums.begin() + i + j);
                j--;
            }
        }
        return nums.size();
    }
};