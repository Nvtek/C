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
{            float t[3][4], somme = 0 ;
				int matrice [3][4];
				int iline, icol;
				   matrice [1][1];
				   matrice [2][3];


                   for (iline = 0; iline <3; iline++)
				   {
				   for (icol = 0; icol < 4; icol++)
				   {
					  scanf("%f",& t [iline][icol]);

				   }

				   }

				   for (iline = 0; iline <3; iline++)
				   {
						printf("Ligne %d : ", iline + 1);
					   for (icol = 0; icol < 4; icol++)
					   {
						  printf ("%f ",t[iline][icol]);
						  somme+=t[iline][icol];
					   }
					   printf("\n");



					   printf("%f", somme);
				   }

				   printf("\nSomme finale : %f", somme);

			 getch();

	return 0;
}
