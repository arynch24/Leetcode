class Solution {
public:
    void rotate(vector<int>& nums, int k) {
       vector<int>rotated_array;
       int n=nums.size();
       k%=n;

       //mine approach
    //    for(int i=nums.size()-k;i<n;i++)
    //    rotated_array.push_back(nums[i]);

    //    for(int i=0;i<n-k;i++)
    //    rotated_array.push_back(nums[i]);
       
    //    for(int i=0;i<n;i++)
    //    nums[i]=rotated_array[i];

//others approach
       reverse(nums.begin(),nums.end());
       reverse(nums.begin(),nums.begin()+k);
       reverse(nums.begin()+k,nums.end());
    }
};