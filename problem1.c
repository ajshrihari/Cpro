#include <stdio.h>
 int sum(int n, int sum, int numbers[])
{
	if (sum==0)
	{
		return 1;
	}
	if (n==0 && sum!=0)
	{
		return 0;
	}
	if (numbers[n-1]>sum)
	{
		return sum( n-1,sum, numbers);
	}

	return sum(n-1,sum,numbers) || sum(sum-numbers[n-1],n-1, numbers);

}
