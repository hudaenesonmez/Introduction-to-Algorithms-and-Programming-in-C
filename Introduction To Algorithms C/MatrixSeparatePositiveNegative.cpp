//An algorithm that stores positive and negative values ??in separate arrays in a matrix.
#include<stdio.h>
int main() 
{
	int i,j,N,M,p=0,n=0;
	printf("Matris satir sayisi : ");
	scanf("%d",&N);
	printf("Matris sutun sayisi: ");
	scanf("%d",&M);
	int A[N][M],Po[N+M],Ne[N+M];
	for(i=0;i<N;i++)
	{
		for(j=0;j<M;j++)
		{
			printf("%d. satir %d. sutunu giriniz: ",i+1,j+1);
			scanf("%d",&A[i][j]);
			if(A[i][j]>0)
			{
				Po[p]=A[i][j];
				p++;
			}
			else
			{
				Ne[n]=A[i][j];
				n++;
			}
		}
	}
	printf("\n Matris \n");
	for(i=0;i<N;i++)
	{
		for(j=0;j<M;j++){
			printf(" %d ",A[i][j]);
		}
		printf("\n");
	}
	printf("\n Pozitif Dizi \n");
	for(i=0;i<p;i++)
	{
		printf(" %d ",Po[i]);
	}
	printf("\n Negatif Dizi \n");
	for(i=0;i<n;i++)
	{
		printf(" %d ",Ne[i]);
	}
	return 0;
	
}
