#pragma hdrstop
#pragma argsused

#include <stdio.h>
#include <stdlib.h>
#ifdef _WIN32
#include <tchar.h>
#else
  typedef char _TCHAR;
  #define _tmain main
#endif




int main(int argc, char** argv) {

	int t1[10];
	int a;
	int b;

		while (a<10)
	{
		printf ("veuillez entrer un nombre : ");
		scanf ("%d", &t1[a]);
		b = b + t1[a];
		a=a+1;

	}

	printf ("le resultat est : ");
	printf ("%d", b);


				   getch();
	return 0;
}
