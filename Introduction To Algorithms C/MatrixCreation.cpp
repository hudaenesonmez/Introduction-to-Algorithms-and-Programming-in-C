//Matrix
#include<stdio.h>
int main()
{
	int i,j,N,M;
	printf("Matris satir sayisi : ");
	scanf("%d",&N);
	printf("Matris sutun sayisi : ");
	scanf("%d",&M);
	int A[N][M];
	for(i=0;i<N;i++)
	{
		for(j=0;j<M;j++)
		{
			printf("\n %d. satirin %d. sutununu giriniz:",i+1,j+1);
			scanf("%d",&A[i][j]);
		}
	}
	printf("\n Matris : \n");
	for(i=0;i<N;i++)
	{
		for(j=0;j<M;j++)
		{
			printf(" %d ",A[i][j]);
		}
		printf("\n");
	}
	return 0;
}
