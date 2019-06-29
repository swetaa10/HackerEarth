#include<stdio.h>
int main()
{
	int i,j,flag,n;
	scanf("%d",&n);
	for(i=2;i<=n;i++)
	{
	  flag=0;
		for(j=2;j*j<=i;j++)
		{
			if(i%j==0)
			{
				flag=1;
				break;
			}
		}
		if(flag!=1)
		{
		  printf("%d ",i);
		}
	}
  return 0;
  }
