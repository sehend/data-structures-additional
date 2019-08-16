#include <stdio.h>

int main()
{
	FILE *ptDosya;
	// dosyayı aç:
	ptDosya = fopen("D:\\ornek.txt", "w");

	// karakterleri yazdır:
	putc('A', ptDosya);

	// dosyayı kapat
	fclose(ptDosya);

	return 0;
}