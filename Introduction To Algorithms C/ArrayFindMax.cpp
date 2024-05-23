//An algorithm that gives the largest element and its position in a user-defined array.
#include<stdio.h>
int main(){
	int enb,yer,N,i,depo;
	printf("Dizi eleman sayisi:? ");
	scanf("%d",&N);
	int A[N];
	for(i=0;i<N;i++)
	{
		printf("%d. dizi elemanini giriniz :? ",i+1);
		scanf("%d",&A[i]);
	}
enb=A[0];
for(i=0;i<N;i++)
{
		if(enb<A[i]){
			enb=A[i];
			yer=i;
		}
	}	
	for(i=0;i<N;i++)
	{
		printf("%d ",A[i]);
	}
	printf("ENB: %d",enb);
	printf("\n %d. sirada",yer+1);
	//Create a new array by placing the largest element at the beginning of the array.
	depo=A[0];
	A[0]=enb;
	A[yer]=depo;
	printf("\n Yeni Dizi:\n");
	for(i=0;i<N;i++){
		printf("%d ",A[i]);
	}
	return 0;
}
