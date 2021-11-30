#pragma hdrstop
#pragma argsused

#include <stdio.h>

#ifdef _WIN32
#include <tchar.h>
#else
  typedef char _TCHAR;
  #define _tmain main
#endif

int _tmain(int argc, _TCHAR* argv[])
{
	int limit;
	int i, j;

	printf("Entrer la valeur jusqu'à ce qu'elle affiche les tables de multiplication (entre 2 et 10)\n");
	scanf("%d", &limit);

	while(limit >= 2 && limit <= 10)
	{
		for(i = 0; i < limit; i++)
		{
			for(j = 0; j < 10; j++)
			{
				if(j > 0)
				{
					printf(" | ");
				}
				printf("%2dx%2d=%3d", j + 1, i + 1, (j + 1)* (i + 1));
			}
			printf("\n");
		}

		printf("\n\nEntrer la valeur jusqu'à ce qu'elle affiche les tables de multiplication (entre 2 et 10)\n");
		scanf("%d", &limit);
	}

	return 0;
}
