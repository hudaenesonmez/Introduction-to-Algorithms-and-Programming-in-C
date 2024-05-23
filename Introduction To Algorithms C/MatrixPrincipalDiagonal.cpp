//The sum of prime diagonals of the matrix.
#include<stdio.h>
int main()
{
	int i,j,N,top=0;
	printf("Kareli Matris satir sutun sayisi : ");
	scanf("%d",&N);
	int A[N][N];
	for(i=0;i<N;i++)
	{
		for(j=0;j<N;j++)
		{
			printf("\n %d. satirin %d. sutununu giriniz:",i+1,j+1);
			scanf("%d",&A[i][j]);
			if(i==j)
			{
				top=top+A[i][j];
			}
		}
	}
	printf("\n Matris : \n");
	for(i=0;i<N;i++)
	{
		for(j=0;j<N;j++)
		{
			printf(" %d ",A[i][j]);
		}
		printf("\n");
	}
	printf("\n Matris Asal Kosegen Toplami: \n");
	printf("%d",top);
	return 0;
}
