#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>

int push(int tepe,int maxsimum, int stack1[4]) {
	int veri;
	if (tepe = maxsimum - 1) {

		printf("stack full");
	 }
     
	else
	{
		printf("veriyi gir:");             
		scanf("%d", &veri);                   /*verilerin girilmessini saglar*/
		tepe = tepe + 1;                         
		stack1[tepe] = veri;                   /*veriyi stack yapısının içine attar*/

	}

}

void pop(int tepe, int stack1[4])
{
	if (tepe == -1)
	{
		printf("stack boş");
	}
	else
	{
		printf("stackten bir eleman siliniyor [%d]", stack1[tepe]); /*silincek verisini gösterir*/
		tepe = tepe - 1;                                               /* stack i siler*/
	}
}











int main() {
	int choise;
	int b = 1;
	int stack[4];
	int top = -1;
	int max = 4;








	while (b == 1)
	{
		printf("1-push/n2-pop/n3-exit");
		switch (choise)
		{
		case 1:

			push(top, max, stack[4]);


			break;

		case 2:
			
			pop(top, stack[4]);



			break;


		case 3:
			printf("cikis:");
			b = 0;


			break;







		default:
			break;
		}



	}












}