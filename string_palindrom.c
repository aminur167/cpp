#include<stdio.h>
#include<string.h>
int main()
{
    char s1[]="Aminur Islam";
    char s2=strrev(s1);
    // printf("str = %s\n",s2);
    if(s1==s2)
    {
        printf("Palendrom\n");
    }
    else
    {
        printf("Not a palendrom");
    }

}