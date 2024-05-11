class Solution {
public:
    vector<int> kthSmallestPrimeFraction(vector<int>& arr, int k) {
        vector<float> v;
        for (int i = 0; i < arr.size(); i++) {
            for (int j = i + 1; j < arr.size(); j++)
                v.push_back(float(arr[i]) / arr[j]);
        }
        sort(v.begin(), v.end());
        vector<int> ans;
        for (int i = 0; i < arr.size(); i++) {
            for (int j = i + 1; j < arr.size(); j++){
                if (((float(arr[i])) / arr[j]) == v[k-1]) {
                    ans.push_back(arr[i]);
                    ans.push_back(arr[j]);
                    return ans;
                }
            }
        }
        return ans;
    }
};