#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>

typedef struct n {

	    int data;
		struct n*prev;
		struct n*next;

}node;

void ekle(n*r) {
	int dügümsayısı;
	node*iter;
	iter = r;
	printf("kac dugum ekliceksin\n");
	scanf("%d", &dügümsayısı);
	
	
		for (int i = 0; i < dügümsayısı; i++)
		{
			iter->next = (node*)malloc(sizeof(node*));
			printf("verileri gir:\n");
			scanf("%d", &iter->data);

			iter = iter->next;


		}
		

	


}

void cıkar(n*r,n*temp1) {
	int silmekistedigindügümnumarası;
	node*iter;
	
	iter = r;
	printf("kac dugum ekliceksin\n");
	scanf("%d", &silmekistedigindügümnumarası);
	for (int i = 0; i < silmekistedigindügümnumarası; i++)
	{
		iter = iter->next;
    }

	temp1 = iter->next;
	iter = iter->next->next;
	




}

void bas(n*r) {
	node*iter;
	iter = r;
	for (int i = 0; i < 2; i++)
	{
		printf("%d", &iter->data);
	}





}




int main() {

	int secim;
	int a = 1;
	node*root = (node*)malloc(sizeof(node*));
	node*temp = (node*)malloc(sizeof(node*));
	while (a==1)
	{
		printf("1-ekle 2-cikar 3-listele 4-cikis\n");
		scanf("%d", &secim);
		switch (secim)
		{
		case 1:

			ekle(root);

			break;
		case 2:

			cıkar(root,temp);
			

			break;
		case 3:

			bas(root);

	

			break;
		case 4:

			a = 0;

			break;

		
		}




	}







}