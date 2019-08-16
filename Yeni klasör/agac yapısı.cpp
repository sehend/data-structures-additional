#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>




typedef struct n {
	int data;
	struct n *next;
	struct n *prev;

}node;

node*ekle(node*agac1,int x) {


	if (agac1 == NULL) {                                     /* agcın 2 koluda null sa*/
		node*root = (node*)malloc(sizeof(node));
		root->next = NULL;
		root->prev = NULL;
		root->data = x;
		return root;
	}
	node* iter = agac1;                                      /*data agactaın datasından kücükse*/
	if (agac1-> data < x) {
		if (iter->next != NULL) {
			agac1->next = ekle(agac1->next, x);
			return agac1;
		
		
			agac1->prev = ekle(agac1->prev, x);
			return agac1;
		 

		}




	}


}


void dolas(node*agac1) {



		if (agac1 == NULL) {                                        /* agacda cocuk bulma bulma*/

			return;
			dolas(agac1->prev);
			printf("%d", &agac1->data);
			dolas(agac1->next);

		}






}
node* sil(node* agac1, int rakam1) {


	if (agac1 == NULL)

	{
		return agac1;
	}
	if (rakam1 < agac1->data){                                     /*silme boşumu ve rakam agactan kucukse*/
		agac1->prev = sil(agac1->prev, rakam1);
	else if (rakam1 > agac1->rakam1) {
		agac1->next = sil(agac1->next, rakam1);
	}
	else
	{

		if (agac1->prev == NULL)
		{

			node *temp = agac1->next;
			free(agac1);                            
			return temp;
		}
		else if (agac1->next == NULL)
		{
			node *temp = agac1->prev;
			free(agac1);
			return temp;
		}
	}

int main() {





	int b = 1;
	int deger,rakam;

	int veri;
	int choise;
	node*agac = (node*)malloc(sizeof(node));
	agac = NULL;
	
		while (b == 1)
		{
		printf("1-ekle/n2-dolas/n3-ara/n4-exit");
		scanf("%d", &choise);

			switch (choise)
			{
				
			case 1:

				printf("veriyi gir:");
				scanf("%d", &veri);
				ekle(agac, veri);



				break;

			case 2:
				dolas(agac);


				break;


			case 3:
				printf("silincek rakam gir:");
				scanf("%d", &rakam);
				sil(agac, rakam);

				break;


		
			}



	}


	

















}
