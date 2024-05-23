//Finding the largest element and its position in the matrix.
#include<stdio.h>
int main()
{
	int i,j,N,M,satiryer=0,sutunyer=0,enb=0;
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
   enb=A[0][0];
	for(i=0;i<N;i++)
	{
		for(j=0;j<M;j++)
		{
			if(A[i][j]>enb)
			{
				enb=A[i][j];
				satiryer=i;
				sutunyer=j;
			}
		}
		printf("\n");
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
	printf("\n Dizideki enb= %d ve %d.satirda %d.sutunda",enb,satiryer+1,sutunyer+1);
	return 0;
}
