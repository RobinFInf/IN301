#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
	int nbr;
	printf("Tester si un nombre est premier : ");
	scanf("%d", &nbr);
	
	int i = 1;
	do{
		i++;
	}while((i*i)<nbr && !(nbr%i == 0));
	
	if((i*i) > nbr){
		printf("%d est premier \n", nbr);
	}else{
		printf("%d n'est pas premier \n", nbr);
	}

	return 0;
}
