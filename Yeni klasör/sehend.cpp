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

    void ekle(node*r,int stack1[]) {
	int top = 0;
	node*iter;
	iter = r;
	if (top<=3)
	{
		if (top==0)
		{
			printf("veriyi gir:\n");
			scanf("%d", &iter->data);
			stack1[0] = iter->data;
			top++;
		}
		
		else
		{
			for (int i = 1; i < 4; i++)
			{
				while (iter->next != NULL)
				{

					iter = iter->next;
				}
				iter->next= (node*)malloc(sizeof(node*));
				
				printf("veriyi gir:\n");
				scanf("%d", &iter->data);
				stack1[i] = iter->data;
				
				iter = iter->next;
				top++;

			}

		}
		






	}
	else
	{
		printf("stack full");
	}






}


void bas(int stack1[]) {


	for (int i = 0; i < 4; i++)
	{
		printf("%d",stack1[i]);
	}




}






int main() {
	int a = 1;
	int secim;
	node*root = (node*)malloc(sizeof(node*));
	
	int stack[4];



	while (a==1)
	{
		printf("1-ekle 2- cıkar 3- listele");
		scanf("%d", &secim);
		switch (secim)
		{
		case 1:

			ekle(root,stack[4]);

			break;

		case 2:



			break;


		case 3:

			bas(stack[4]);

			break;




	
		}









	}






}