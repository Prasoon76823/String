#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
    char str[]="hello";
    int len=strlen(str);
    for(int i=0;i<len;i++)
    {
        for(int j=0;j<len;j++)
        {
            for(int k=i;k<j;k++)
            {
                printf("%c",str[k]);
            }
            printf("\n");
        }
    }
}