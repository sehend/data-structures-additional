#include <stdio.h>
#include <stdlib.h>



int pop(int tp, int boyut[]) {
	
	int control = checkempty;
		
	
	
	if (control==0)
	{
		tp = tp - 1;
		return(boyut[tp]);
	}
	else
	{
		printf("silincek öge yok");
	}
	return boyut[--tp];

}

void push(int cisim, int tp, int boyut,int diz) {
	
	if (tp<=boyut)
	{
		int *dizi2 = (int*)malloc(sizeof(int)*boyut * 2); /*dizi ger full ise yeni dizi olusturur dizinin 2 katı büyüklügünde ve ona verileri atarak yer açar*/
		for (int i = 0; i < boyut; i++)
		{
			dizi2[i] = diz;
		}
		free(diz);     /*eski diziyi siler*/
		diz = dizi2;
		boyut *= 2;
		tp = tp + 1; /*veriyi ekler*/
		dizi2[tp] = cisim; /*veriyi ekler*/
	}
	else
	{
		tp = tp + 1; /*veriyi ekler*/
		diz[tp] = cisim; /*veriyi ekler*/
	}


}

void peek(int tp,int diz) {


	for (int i = 0; i < tp; i++)
	{
		printf("%d", diz[i]);
	}




}







int main() {
	int *dizi;                               /*diziyi stactik oldugu için dinamik olması için pointer olarak yazdım*/
	dizi=(int*)malloc(sizeof(int)*3);
	int size = 3;
	int top = 0;
	pop(top, size);
	int b = 1;
	int choise,item,a;




	while (b==1)
	{
		printf("1-push/n2-pop/n3-peek/n4-exit");
		switch (choise)
		{
		case 1:

			printf("hangi numerayı eklemek istiyorsun?");
			scanf("%d", &item);

			push(item,top, size, *dizi);

				break;

		case 2:
			pop(top,*dizi);




			break;


		case 3:

			 peek(top,*dizi);
			

				break;







		default:
			break;
		}





	}













}