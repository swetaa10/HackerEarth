#include<stdio.h>
int main()
{
    long int n,m,x,i,j,count=0,temp;
    scanf("%lld %lld %lld",&n,&m,&x);
    temp=m;
    while(n>=0)
    {
      m=temp;
      n=n-m;
      count++;
      for(i=1;i<=x;i++)
      {
        if(n<0)
        break;
        n=n-(m-i);
        count++;
      }
    }
    printf("%lld",count);
    
}
