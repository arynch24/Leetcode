#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    string findLatestTime(string s) {
        

        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='?')
            {
                if(i==0)
                {
                    if(s[1]=='1' || s[1]=='0' ||s[1]=='?')
                    s[i]='1';
                    else if(int(s[1])>=2)
                    s[i]='0';
                }
    

                if(i==1)
                {
                    if(s[0]=='0')
                    s[i]='9';
                    else if(s[0]='1')
                    s[i]='1';
                }
                
                if(i==3)
                s[i]='5';

                if(i==4)
                s[i]='9';
            }        
        }
        

        return s;


    }
};