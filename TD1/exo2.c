#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){
	int T;
	printf("Donnez un temps en secondes : \n");
	scanf("%d", &T);
	
	int heure;
	int minute;
	int seconde;
	
	heure = T/3600;
	minute = (T-(3600*heure))/60;
	seconde = T-((3600*heure)+(60*minute));
	
	if(T>1){
		printf("%d secondes font :\n", T);
	}else{
		printf("%d une seconde fait :\n", T);
	}
	if(heure > 1)
	{
		printf("%d heures ", heure);
	}
	else
	{
		printf("%d heure ", heure );
	}
	if(minute > 1)
	{
		printf("%d minutes ", minute );
	}
	else
	{
		printf("%d minute ", minute );
	}
	if(seconde > 1)
	{
		printf("%d secondes\n", seconde );
	}
	else
	{
		printf("%d seconde\n", seconde );
	}
	
	
  return 0;
}
