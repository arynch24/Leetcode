#include<iostream>
using namespace std;
#include<vector>
class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {

        int start = 0, end = 0, mid, ans,n=piles.size();
        long long sum = 0;
        for (int i = 0; i < n; i++) {
            sum += piles[i];
            end = max(end, piles[i]); // max speed of eating bananas
        }
        start = sum / h; // minimum speed
        if (start == 0)
            start = 1;

        while (start <= end) {
            mid = start + (end - start) / 2;
            // mid amount of bananas to consume in one h
            int total_time = 0; // time taken to eat all bananas on the given
                                // mid which is our answer
            for (int i = 0; i < n; i++) {
                total_time += piles[i] / mid;
                if (piles[i] %
                    mid) // condition for floating answers to take max h
                    // for ex 3/2=1 but it should be 2 hours
                    total_time++;
            }

            if (total_time > h) // if total time is greater than given h it
                                // means we have to increase our speed
            // to eat bananas so we will go right
            {
                start = mid + 1;
            } else // we will find the minimum speed possible to go left

            // note
            // whenever we have to find minimum in ans we have to save our
            // answer from left search if maximum than right search

            {
                ans = mid;     // here minimum
                end = mid - 1; // left search
            }
        }
        return ans;
    }
};