
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int numberOfSpecialChars(string word) {
        
      vector<char> v(word.begin(), word.end());
 
        sort(v.begin(), v.end());
        // for(int i=0;i<v.size();i++)
        // cout<<v[i]<<" ";
        // cout<<endl;
        
        vector<char>ans;
        v.push_back('#');
            
        
        for(int i=0;i<v.size()-1;i++)
        {
            if(int(v[i])!=v[i+1])
                ans.push_back(v[i]);
           
        }
        // for(int i =0;i<ans.size();i++)
        // cout<<ans[i]<<" ";
        int count=0;
        for(int i=0;i<ans.size();i++)
        {
            for(int j=0;j<ans.size();j++)
            {
                if(abs(int(ans[i])-int(ans[j]))==32)
                    count++;
                
            }
        }
       return count/2;
        
    }
};