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
{            float t[3][4],m[3], somme = 0, moyen = 0 ;
				int matrice [3][4];
				int iline, icol;
				   matrice [1][1];
				   matrice [2][3];


                   for (iline = 0; iline <3; iline++)
				   {
						somme=0;
				   for (icol = 0; icol < 4; icol++)
				   {

					  scanf("%f",& t [iline][icol]);
					  somme+=  t [iline][icol];
				   }
					m[iline] = somme/4.0;
				   }

				   for (iline = 0; iline <3; iline++)
				    {
						somme = 0;
						printf("Ligne %d : ", iline + 1);
					   for (icol = 0; icol < 4; icol++)
					   {
						  printf ("%f ",t[iline][icol]);



					   }
					   printf("\n");




				   }

				   printf("Les moyennes sont %f, %f, %f", m[0], m[1], m[2]);

			 getch();

	return 0;
}
