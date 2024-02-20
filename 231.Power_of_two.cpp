


class Solution {
public:
    bool isPowerOfTwo(int n) {
        
        bool flag=false ;
       int i=0;
        while(n!=0,i<=31)
        {
            if(pow(2,i)==n)
            {flag =true ;}

            i+=1;
        }
        if (flag!=true)
        {return false;}

        else
        {return true;}


    }
};