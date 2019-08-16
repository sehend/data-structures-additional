#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>


typedef struct std {

	int id;

} std;
typedef struct n {
	struct std data;
	struct n *next;
	struct n *prev;

}node;

int push(node*r,int stackyapı[4 - 1]) {
	int top = 3;
	int sayac=0;
	int a = 1;

	if (sayac <= top)
	{
		int stackyapı2[100] = (int*)malloc(sizeof(int) ); /* eger stackyapı yapısında 3 lüyer küçük gelirse 100 luk yeni stack açar*/
		for (int i = 0; i < sayac; i++)
		{
			stackyapı[i] = stackyapı2[i];                      /* eski stack teki bigileri yani 100lük stack e attar*/
		}
		free(stackyapı[4-1]);
		
		while (a==1)
		{
			printf("veriyi giriniz:");    
			scanf("%d", r->data);                     /*verilerin girilmessini saglar*/
			r = stackyapı[sayac];
			r = r->next;                             /* root u rootun nextine götürür*/
			r->next = (node*)malloc(sizeof(node));        /*root un nextine dügüm açar*/
			r = r->next;
			a = 0;
		}
		
	}
	else
	{
		printf("veriyi giriniz:");
		scanf("%d", r->data);                                /*verilerin girilmessini saglar*/
		r->next = (node*)malloc(sizeof(node));               /*root un nextine dügüm açar*/
		r = stackyapı[sayac];                                 /*rootu stack yapısına ekler*/
		r = r->next;                                           /* root u rootun nextine götürür*/
		sayac++;
	}






}







int peek(int stackyapı[4 - 1]) {


	for (int i = 0; i < 100; i++)
	{
		prinf("%d", stackyapı[i]);
	}





}









int main() {

	node *root;
	root = (node*)malloc(sizeof(node));
	node*iter;

	int b = 1;

	int stack[4-1];
	int top = 3;
	int choise;



	while (b==1)
	{
		printf("1-push/n2-pop/n3-peek/n4-exit");
		switch (choise)
		{
		case 1:
			
			push(root, stack[4 - 1]);
			

			break;

		case 2:
			
			



			break;


		case 3:

			peek(stack[4 - 1]);


			break;







		default:
			break;
		}

		

	}




















}