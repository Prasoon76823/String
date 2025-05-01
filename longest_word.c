#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
    char str[]="helloooo world";
    int len=strlen(str);
    int count=0,j;
    int maxcount=0;
    for(int i=0;i<len;i++)
    {
        
        if(str[i]!=' '&& str[i]!='\0')
        {
            count++;
        }
        else{
            if(count>maxcount)
            {
                maxcount=count;
            }
        }
        printf("Longest word: %s",str);
        break;
    }
    printf("longest word count: %d",maxcount);
}