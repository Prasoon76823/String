#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<ctype.h>
int main()
{
    char str[]="HELLO";
    int len=strlen(str);
    for(int i=0;str[i]!='\0';i++)
    {
        if(islower(str[i]))
        {
            str[i]=toupper(str[i]);
        }
    }
    printf("Uppercase: %s",str);
    for(int i=0;str[i]!='\0';i++)
    {
        if(isupper(str[i]))
        {
            str[i]=tolower(str[i]);
        }
    }
    printf("\nLowercase: %s",str);
}