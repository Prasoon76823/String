#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
    char str[]="hello";
    int len=strlen(str);
    for(int i=0;i<len;i++)
    {
        int flag=0;
        for(int j=0;j<len;j++)
        {
            if(str[i]==str[j])
            {
                flag=flag+1;
            }
        }
        if(flag==1)
        {
            printf("%c",str[i]);
            break;
        }

    }
}