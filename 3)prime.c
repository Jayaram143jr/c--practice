#include<stdio.h>
void main(){
    int i,num=4,count=0;
    if(num<=1)
    {
        printf("It'not a prime number");
    }
    else
    {
        for(i=1;i<=num;i++)
        {
            if(num%i==0)
            {
                count++;
            }
        }
    }

    if(count==3)
    {
        printf("Not a prime number");
        
    }
    else{
        printf("Prime number");
    }
}