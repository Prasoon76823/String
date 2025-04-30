#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
    char str[]="hello world";
    int len=strlen(str);
    for(int i=0;i<len;i++)
    {
        if(str[i]==' ')
        {
            continue;
        }
        printf("%c",str[i]);
    }
  
    
}