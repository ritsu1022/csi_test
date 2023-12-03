/*
 ============================================================================
 Name        : csi_test.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	puts("なにかキーを押すと画面を消します");
	(void) getchar();
	printf("\033[2J");
	printf("\033[10;5H");
	printf("10行5桁目にカーソルを移動\n");

	return EXIT_SUCCESS;
}
