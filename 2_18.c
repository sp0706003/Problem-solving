#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main()
{
    int l,i;
    char s[200]="Geeks",*j;
    j=s;
    l=strlen(s);
    for(i=0;i<l;i++)
    {
        printf("%s\n",j);
        *(j+i)='.';
    }
 return 0;
}
