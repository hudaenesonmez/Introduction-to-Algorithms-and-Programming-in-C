//Sort the user-entered array in ascending order
#include<stdio.h>
int main()
{
	int i,N,depo,j;
	printf("Dizi kac elemanli? : ");
	scanf("%d",&N);
	int A[N];
	for(i=0;i<N;i++)
	{
		printf("%d. elemani giriniz : ",i+1);
		scanf("%d",&A[i]);
	}
	printf("\n Girilien Dizi \n");
	for(i=0;i<N;i++)
	{
		printf(" %d ",A[i]);
	}
	for(i=0;i<N;i++)
	{
		for(j=0;j<N-1;j++)
		{
			if(A[j]>A[j+1])
			{
				depo=A[j];
				A[j]=A[j+1];
				A[j+1]=depo;
			}
		}
	}
	printf("\n Siralanmis dizi \n");
		for(i=0;i<N;i++)
	{
		printf(" %d ",A[i]);
	}
	
}
