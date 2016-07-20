#include<stdio.h>
int main()
{
	int N;
	scanf("%d",&N);
	int arr[N][N];
	for(int i=0;i<N;i++)
	{
		for(int j=0;j<N;j++)
		{
			scanf("%d",&arr[i][j]);
		}
	}
	printf("Elements: \t Index: \t Sum:\n\n");
	int sum = arr[0][0],i=0,j=0;
	while(i!=N-1 || j!=N-1)
	{
		if((i==N-1 && j!=N-1))
		{
			j++;
			sum+=arr[i][j];
		}
		else if(arr[i+1][j] > arr[i][j+1])
		{
			i++;
			sum+=arr[i][j];
		}
		else
		{
			j++;
			sum+=arr[i][j];
		}
		printf("Array:%d \t(%d,%d) \t\t Sum:%d \n",arr[i][j],i,j,sum);
	}
	printf("\nThe maximum sum is: %d\n",sum);
}