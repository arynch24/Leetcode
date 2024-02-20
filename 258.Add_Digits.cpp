class Solution {
public:
    int addDigits(int num) 
    {
        
       while(num>9)
       {
           int sum_digit=0;
        int digit;
        while(num>0)
        {
            digit =num%10;
            num/=10;
            
            sum_digit+=digit;
             
        }
        num=sum_digit;
       
       }
       
       return num;
        
    }
};