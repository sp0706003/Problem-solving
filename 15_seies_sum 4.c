#include<stdio.h>
int main()
{
    float i,c;
    float sum=0;
    for(i=1;i<=10;i++)
    {
            sum = sum+(i/(i+1));
    }
    printf("%f",sum);
 return 0;
}
