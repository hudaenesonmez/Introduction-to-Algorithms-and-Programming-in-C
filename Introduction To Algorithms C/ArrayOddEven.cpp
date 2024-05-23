#include<stdio.h>
//The sum and the average of the odd and even elements in the user-defined array.
int main()
{
	int N,i,tektop=0,ciftop=0,tadet=0,cadet=0;
	float tort,cort;
	printf("Dizi kac elemanli : ");
	scanf("%d",&N);
	int A[N];
	for(i=0;i<N;i++)
	{
		printf("\n Dizinin %d. elemanini gir : ",i);
		scanf("%d",&A[i]);
	}
	//The requested.
	for(i=0;i<N;i++)
	{
	if(A[i]%2==0)
	{
		ciftop=ciftop+A[i];
		cadet++;
	}
	else
	{
		tektop=tektop+A[i];
		tadet++;
	}
}
if(tadet>0)
{
tort=float(tektop)/float(tadet);	
}
if(cadet>0){
cort=float(ciftop)/float(cadet);	
}
	//PRINT THE ARRAY
	for(i=0;i<N;i++)
	{
		printf("%d ",A[i]);
	}
	printf("\n");
printf("Tek Sayilarin Toplami : %d \n",tektop);
printf("Tek Sayilarin Ortlamasi : %f \n",tort);
printf("Cift Sayilarin Toplami : %d \n",ciftop);
printf("Cift Sayilarin Ortalamasi : %f \n",cort);
return 0;
}
