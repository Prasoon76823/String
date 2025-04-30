#include<stdio.h>
#include<conio.h>
#include<string.h>
void revstring(char s[])
{
    char temp;
    int len=strlen(s);
    int i,j;
    for(i=0,j=len-1;i<j;i++,j--)
    {
        temp=s[i];
        s[i]=s[j];
        s[j]=temp;
    }
}
int main()
{
    char s[]="hello";
    char temp[100];
    revstring(s);
    strcpy(temp,s);
    printf("Reverse: %s",s);
    if(temp==s)
    {
        printf("\npallindrome");
    }
    else
    {
        printf("\nNot a pallindrome");
    }
}
