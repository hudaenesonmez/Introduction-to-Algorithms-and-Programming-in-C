//Separate positive and negative numbers into two separate arrays in an array of N elements entered by the user.
#include<stdio.h>
int main(){
	int i,N,p=0,n=0;
	printf("Eleman sayisi:? ");
	scanf("%d",&N);
	int A[N],Po[N],Ne[N];
	for(i=0;i<N;i++)
	{
		printf("%d. elemani girin: ",i+1);
		scanf("%d",&A[i]);
		if(A[i]>0)
		{
			Po[p]=A[i];
			p++;
		}
		else
		{
			Ne[n]=A[i];
			n++;
		}
	}
	printf("\n Dizi \n");
	for(i=0;i<N;i++)
	{
		printf(" %d% ",A[i]);
	}
		printf("\n Pozitif Dizi \n");
	for(i=0;i<p;i++)
	{
		printf(" %d% ",Po[i]);
	}
		printf("\n Negatif Dizi \n");
	for(i=0;i<n;i++)
	{
		printf(" %d% ",Ne[i]);
	}
	return 0;
}
