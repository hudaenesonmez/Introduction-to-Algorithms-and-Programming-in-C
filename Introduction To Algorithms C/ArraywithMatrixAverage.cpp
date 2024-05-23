//An algorithm where the elements of a matrix are averaged, and numbers greater than the average are written in a new array.
#include<stdio.h>
int main()
{
	int i,j,N,M,b=0,mtop=0;
	float ort;
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
			mtop=mtop+A[i][j];
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
	ort=float(mtop)/float(N*M);
	int B[N*M];
	for(i=0;i<N;i++)
	{
		for(j=0;j<M;j++)
		{
			if(A[i][j]>ort)
			{
				B[b]=A[i][j];
				b++;
			}
		}
	}
	printf("\n Matris Elemanlarý Toplamý %d  ve Ortalama %f : \n",mtop,ort);
	printf("Buyuk olanlarin dizi: \n ");
	for(i=0;i<b;i++)
	{
		printf(" %d ",B[i]);
	}
	return 0;
}
