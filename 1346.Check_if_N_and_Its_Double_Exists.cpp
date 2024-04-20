#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        bool flag = false;
        for (int i = 0; i < arr.size(); i++) {
            for(int j=0;j<arr.size();j++)
            {
                if (i != j) {
                    if (arr[i] == 2 * arr[j]) {
                        flag = true;
                        break;
                    }
                }
            }
        }
        if (flag)
            return true;
        else
            return  false;
    }
};