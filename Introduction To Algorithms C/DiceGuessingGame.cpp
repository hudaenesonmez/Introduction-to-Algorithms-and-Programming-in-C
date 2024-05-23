#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
int sayi,i,X;
srand(time(NULL));
sayi=1+rand()%7;
for(i=1;i<=3;i++)
{
	printf("Bir Sayi Giriniz : ");
	scanf("%d",&X);
	if(X==sayi)
	{
		printf("Dogru Tahmin! \n");
		break;
	}
	else if(X<sayi)
	{
		printf("Daha Buyuk Sayilari Deneyin \n");
	}
	else
	{
		printf("Daha Kucuk Sayilari Deneyin \n");
	}
	
}
printf("Zardaki Sayi: %d",sayi);
return 0;	
}
