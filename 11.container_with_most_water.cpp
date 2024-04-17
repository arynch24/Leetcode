#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maxArea(vector<int>& height) {
       //two pinter
        int start = 0, end = height.size() - 1;
        int area = 0, max_area = 0;
        while (start < end) {
            area = (end - start) * min(height[start], height[end]);
            max_area = max(max_area, area);
            if (height[start] < height[end])
                start++;
            else
                end--;
        }
        return max_area;
    }
};