class Solution {
public:
    int bitwiseComplement(int n) {
 
        int rem,mult=1,ans=0;
        if(n==0)
        return 1;
        
        while(n>0)
        {
            rem=n%2;
           rem=rem^1;

            n/=2;
            ans+=rem*mult;
            mult*=2;
        }
        
        return ans;

    }
};