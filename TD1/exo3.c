#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char *argv[]){
	int Op;
	int X;
	int Y;
	printf("Donnez X (entier): \n");
	scanf("%d", &X);
	printf("Donnez Y (entier): \n");
	scanf("%d", &Y);
	
	if(X%2 == 0){
		Op = (X/2)*(2*Y);
		printf("La multiplication Egyptienne de %d x %d vaut %d \n", X, Y, Op);
	}else{
		Op = (((X-1)*Y)+Y);
		printf("La multiplication Egyptienne de %d x %d vaut %d \n", X, Y, Op);
	}
	return 0;
}
