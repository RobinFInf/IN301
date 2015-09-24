#include <stdio.h>
#include <stdlib.h>

int sommeDiviseurs(int n)
{
	int i=1;
	int somme=0;
	while(i < n)
	{
		if(n%i == 0)
		{
			somme = somme+i;
		}
		i++;
	}
	return(somme);
}

int nbrAmi(int n, int m)
{
	if(sommeDiviseurs(n) == m )
	{
		if(sommeDiviseurs(m) == n)
		{
			printf("%d et %d sont amis \n", n,m);
		}
		else
		{
			return 0;
		}
	}
	else
	{
		printf("%d et %d ne sont pas amis \n", n, m);
	}
	return 0;
}

int main()
{
	int n;
	int m;
	printf("Donnez une valeur pour n et une pour m :\n");
	scanf("%d", &n);
	scanf("%d", &m);
	
	nbrAmi(n,m);
	return 0;
}
