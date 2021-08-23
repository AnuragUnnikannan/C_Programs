#include <stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int a[n][n];
	int b[n][n];
	int p[n][n];
	for(int i = 0;i<n;i++)
	{
		for(int j = 0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	for(int i = 0;i<n;i++)
	{
		for(int j = 0;j<n;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
	printf("\nThe First Matrix is :\n"); 
	for(int i = 0;i<n;i++)
	{
		for(int j = 0;j<n;j++)
		{
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	printf("\nThe Second Matrix is :\n");
	for(int i = 0;i<n;i++)
	{
		for(int j = 0;j<n;j++)
		{
			printf("%d ",b[i][j]);
		}
		printf("\n");
	}
	for(int i = 0;i<n;i++)
	{
		for(int j = 0;j<n;j++)
		{
			p[i][j] = 0;
			for(int k = 0;k<n;k++)
			{
				p[i][j] = p[i][j]+a[i][k]*b[k][j];
			}
		}
	}
	printf("\nThe multiplication of two matrices is :\n");
	for(int i = 0;i<n;i++)
	{
		for(int j = 0;j<n;j++)
		{
			printf("%d ",p[i][j]);
		}
		printf("\n");
	}
	return 0;
}
	
