//The sum and average of negative and positive numbers in the matrix.
#include<stdio.h>
int main()
{
	int i,j,N,M,ptop=0,padet=0,ntop=0,nadet=0;
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
			if(A[i][j]>0)
			{
				padet++;
				ptop=ptop+A[i][j];
			}
			else
			{
				nadet++;
				ntop=ntop+A[i][j];
			}
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
	printf("\n Pozitif Sayilarin toplami: %d ",ptop);
	if(padet>0)
	{
		ort=float(ptop)/float(padet);
		printf("\n Pozitif Sayilarin ortalamasi %f",ort);
	}
	else
	{
		printf("\n Pozitif sayi yok.");
	}
	printf("\n Negatif Sayilarin toplami: %d ",ntop);
	if(nadet>0)
	{
		ort=float(ntop)/float(nadet);
		printf("\n Negatif Sayilarin ortalamasi %f",ort);
	}
	else
	{
		printf("\n Negatif sayi yok.");
	}
	return 0;
}
