#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
    char str[]="helloooo";
    int len=strlen(str);
    int count,j;
    int visited[100]={0};
    for(int i=0;i<len;i++)
    {
        count=0;
        if(visited[i]==1)
        {
            continue;
        }
        for(j=i;j<len;j++)
        {
            if(str[i]==str[j])
            {
                count++;
            }
            else{
                break;
            }
        }
        printf("\n%c",str[i]);
        printf("\nFrequency: %d",count);
        i=j-1;
    }
}