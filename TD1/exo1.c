#include <stdio.h>
#include <stdlib.h>

//fonction principale
int main(void){
	int i;
	int j;
	int n = 10;
	for(i=0; i<10; i++){
		for(j=n; j>0; j--){
			printf(" ");
		}
		printf("*\n");
		n--;
	}
  return 0;
}
