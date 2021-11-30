#pragma hdrstop
#pragma argsused

#include <stdio.h>

#ifdef _WIN32
#include <tchar.h>
#else
  typedef char _TCHAR;
  #define _tmain main
#endif

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

main()
{
int N,* tab,x,i,nombre,temp;
printf("N:");
scanf("%d",&N);
srand((unsigned int)time(NULL));
tab=(int *)malloc(N*sizeof(int));
for(i=0;i<N;i++)
	{
	nombre = rand()%100 +1;
	tab[i]=nombre;
	}
	printf("Tableau non trier:\n");
	for(i=0;i<N;i++)
		{
		printf("tab[%d] : %d\n",i,tab[i]);
		}
		printf("\n\nTableau trier:\n");
		for(x=0;x<N;x++)
			{
			for(i=0;i<N;i++)
				{
					if((tab[i]) < (tab[i+1]))
					{
					temp=tab[i];
					tab[i]=tab[i+1];
					tab[i+1]=temp;
					}
				}
			}
			for(i=0;i<N;i++)
		{
		printf("tab[%d] : %d\n",i,tab[i]);
		}
getch();
}
