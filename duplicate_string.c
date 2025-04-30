#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
    char str[]="hello";
    char temp[100];
    int i,len=strlen(str);
    int f=0;
    for(i=0;i<len;i++)
    {
        for(int j=0;j<i;j++)
        {
            if(str[i]==str[j])
            {
                f=1;
                for(int k=j;k<len-1;k++)
                {
                    str[k]=str[k+1];
                }
                len--;
                j--;
            }
        }
    }
    if(f==1)
    {
        printf("duplicate\n");
    }
    else
    {
        printf("No duplicate\n");
    }
    for(i=0;i<len;i++)
    {
        printf("%c",str[i]);
    }
}