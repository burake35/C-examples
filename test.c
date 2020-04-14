#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define		TRUE	1
#define		FALSE	0

int main() {
	int deger, dizi[] = {1,2,3,4,5,6,7,8,9,10};
	printf("kac sayi istersin");
	scanf("%d", &deger);

	switch (deger)
	{
	case 1:for (int i = 0; i < deger; i++) {
		printf("%d  ", dizi[i]);
	}break;
	case 2:for (int i = 0; i < deger; i++) {
		printf("%d  ", dizi[i]);
	}break;
	case 3:for (int i = 0; i < deger; i++) {
		printf("%d  ", dizi[i]);
	}break;
	case 4:for (int i = 0; i < deger; i++) {
		printf("%d  ", dizi[i]);
	}break;
	case 5:for (int i = 0; i < deger; i++) {
		printf("%d  ", dizi[i]);
	}break;
	case 6:for (int i = 0; i < deger; i++) {
		printf("%d  ", dizi[i]);
	}break;
	case 7:for (int i = 0; i < deger; i++) {
		printf("%d  ", dizi[i]);
	}break;
	case 8:for (int i = 0; i < deger; i++) {
		printf("%d  ", dizi[i]);
	}break;
	case 9:for (int i = 0; i < deger; i++) {
		printf("%d  ", dizi[i]);
	}break;
	
	default:
		break;
	}

}