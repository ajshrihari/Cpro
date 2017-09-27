#include <stdio.h>
int main()
{
int T;	scanf("%d",&T);
	for (int i =0;i<T;i++)
	{
		int c,X,Y,M;
		int result=1;
		scanf("%d %d %d", &X,&Y,&M);
		while (Y!=0)
		{
			result*=X;
			Y--;
		}
		c=result%M;
		printf("%d\n",c);
	}
	return 0;
}



