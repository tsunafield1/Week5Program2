#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int n, k,a[2000],x,sum=0;
	scanf("%d %d", &n, &k);
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
	}
	for (int i = 0; i < n-1; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (a[i] > a[j])
			{
				x = a[i];
				a[i] = a[j];
				a[j] = x;
			}
		}
	}
	for (int i = n - 1; i >= 0; i -= k)
	{
		sum += a[i];
	}
	printf("%d", sum);
}