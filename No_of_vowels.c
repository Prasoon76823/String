#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
    char str[]="hello";
    int len=strlen(str);
    int f=0,count=0;
    for(int i=0;i<len;i++)
    {
        if(str[i]=="a"||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||str[i]=="A"||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U')
        {
            count++;
        }
    }
    if(count>0)
    {
        printf("\nyes their are vowels");
    }
    else{
        printf("\nTheir are no vowels");
    }
    printf("\nNo. of vowels: %d",count);
}