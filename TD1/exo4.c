#include <stdio.h>
#include <stdlib.h>

//Limites

float limite(float e){
	float Sn1 = 1.25; 
	float Sn = 1.0; 
	float i = 3.0;
	while (Sn1-Sn > e) 
	{
		Sn = Sn1; 
		Sn1 = Sn1 + 1/(i*i);	
		i++;
	}
	return Sn;
}

int main(){
	float e;
	printf("Donner une valeur d'epsilon : \n");
	scanf("%f", &e);
	printf("La limite de la suite 1/i^2 est : %f \n", limite(e));
	return 0;
}
