#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>
typedef struct std {

	int id;
	
} std;
typedef struct n {
	struct std std;
	struct n *next;
	struct n *prev;

}node; 
int main() {


	node *root;
	root = (node*)malloc(sizeof(node));
	node*iter;
	iter = root;
	iter->std.id = 10;




	iter->next = (node*)malloc(sizeof(node));
	iter = iter->next;
	iter->std.id = 20;



	iter->next = (node*)malloc(sizeof(node));
	iter = iter->next;
	iter->std.id = 30;


	iter->next = (node*)malloc(sizeof(node));
	iter = iter->next;
	iter->std.id = 40;


	iter->next = (node*)malloc(sizeof(node));
	iter->std.id = 50;
	iter = iter->next;



	iter->next = null;


	while (iter->std.id != 20)
	{
		iter = iter->next;
	}
	if (iter->std.id = 20)
	{
		node*temp; /*silmek istedigin dügümü baglamak için yeni bir dügüm ac*/
		temp = (node *)malloc(sizeof(node));
		temp = iter->next; /*tempi iterin nextine baglar*/
		iter->next = iter->next->next;
		iter->next->prev = iter->next; /*iterin prev ni birsonraki dügüme ekler*/
		free(temp); /*tempe baglı temple birlikte oluşan 2 dügümü siller*/
	}








	while (iter->std.id != 30)
	{
		iter = iter->next;
	}
		if (iter->std.id = 30)
		{
			node*temp; /*silmek istedigin dügümü baglamak için yeni bir dügüm ac*/
			temp = (node *)malloc(sizeof(node));
			temp = iter->next; /*tempi iterin nextine baglar*/
			iter->next = iter->next->next;
			iter->next->prev = iter->next; /*iterin prev ni birsonraki dügüme ekler*/
			free(temp); /*tempe baglı temple birlikte oluşan 2 dügümü siller*/
		}
		
	
		while (iter->std.id != 40)
		{
			iter = iter->next;
		}
		if (iter->std.id = 40)
		{
			node*temp; /*silmek istedigin dügümü baglamak için yeni bir dügüm ac*/
			temp = (node *)malloc(sizeof(node));
			temp = iter->next; /*tempi iterin nextine baglar*/
			iter->next = iter->next->next;
			iter->next->prev = iter->next; /*iterin prev ni birsonraki dügüme ekler*/
			free(temp); /*tempe baglı temple birlikte oluşan 2 dügümü siller*/
		}

		while (iter->std.id != 50)
		{
			iter = iter->next;
		}
		if (iter->std.id = 50)
		{
			node*temp; /*silmek istedigin dügümü baglamak için yeni bir dügüm ac*/
			temp = (node *)malloc(sizeof(node));
			temp = iter->next; /*tempi iterin nextine baglar*/
			iter->next = iter->next->next;
			iter->next->prev = iter->next; /*iterin prev ni birsonraki dügüme ekler*/
			free(temp); /*tempe baglı temple birlikte oluşan 2 dügümü siller*/
		}














};