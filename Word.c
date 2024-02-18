#include<stdio.h>
int main()
{char str[100];
scanf("%s",str);
int count1 =0,count2=0;
    for (int i=0;i<100;i++)
    {
        
        if (str[i]>96)
        count1++;
        else
        count2++;
    }
    printf("%d %d  ",count1,count2);
    if (count1>=count2)
    {
        for(int i=0;i<100;i++)
        {
            int a=str[i];
            if(a<96)
            str[i]=a+32;
        }
    }
    else
    {
        for(int i=0;i<100;i++)
        {
            int a=str[i];
            if(a>96)
            str[i]=a-32;
        }
    }
    printf("%s",str);

}
