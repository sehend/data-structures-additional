#include <stdio.h>
#include <stdlib.h>

typedef struct node {
	int data;
	struct node* next;
}n;

void ekle(n* r) {
	while (r->next != NULL)
	{
		r = r->next;                                        /*root istedigimiz noktaya getirir */
	}
	printf("bir sayi gir..");     
	scanf("%d", &r->data);                                       /*dügüme data ekleme*/
	r->next = (n*)malloc(sizeof(n));                           /*yeni dügüm oluştur*/
	r->next->next = NULL;                                   /*yeni dügümü null a baglar*/
}


void goster(n* r) {
	while (r->next != NULL)
	{
		printf("%d->", r->data);                  /*dügümdeki data verisini ekrana basma*/
		r = r->next;
	}
	printf("NULL");
}

void sil(n* r){
	while (r->next->next != NULL)
	{
		r = r->next;                            /*root istedigimiz noktaya getirir */
	}
	r->next = NULL;                               
	free(r->next);                                /*dügümü siler*/
}



void bul(n* r,int h) {
	while (r->next->data != h)                
	{
		r = r->next;                            /*root istedigimiz noktaya getirir ve sectigimiz veriyi bulunca dogru dügümde durur */
	}
	printf("aradiginiz dugum..%d\n", r->next->data);
		

}


int main(){
	int sec,hng;
	n* root = (n*)malloc(sizeof(n));
	root->next = NULL;

	do
	{
		printf("\n1-ekle\n2-sil\n3-bul\n4-cik\nsecim..");
		scanf("%d", &sec);

		switch (sec)
		{
		case 1:
			ekle(root);
			goster(root);

			break;
		case 2:
			sil(root);
			goster(root);
				break;
		case 3:
			printf("Hangi eleman..");
			scanf("%d", &hng);
			bul(root, hng);
			goster(root);
			break;
		default:
			break;
		}


	} while (sec >0 && sec <=3);


}

