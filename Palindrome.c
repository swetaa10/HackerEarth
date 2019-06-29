#include<stdio.h>
#include<string.h>
void main()
{
    char string[100],rev_string[1000];
    int i,j=0,len=0,flag=0;
    scanf("%s",string);
    len=strlen(string);
    for(i=len-1;i>=0;i--)
    {
        rev_string[j]=string[i];
        j++;
    }
    for(i=0;i<len-1;i++)
    {
        if(string[i]==rev_string[i])
        {
            flag++;
        }
    }
    if(flag==len-1)
        printf("YES");
    else
        printf("NO");
}
