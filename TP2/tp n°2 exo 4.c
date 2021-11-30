#include <stdio.h>
#include <stdlib.h>

main()
{
	float a,b,c,d,e,f,g,h;

	 while (h=1)

	{
	printf("indiquez votre âge ");
	scanf ("%f",&a);

	printf ("tapez 1 si vous etes un homme ou 2 si vous etes une femme ");
	scanf ("%f",&b);

	printf ("nombre de fois ou vous allez au cinema par mois ");
	scanf ("%f",&c);

	printf ("tapez 3 si vous preferai quick ou 4 si vous preferais mac donald ");
	scanf ("%f",&d);

	printf ("tapez le nombre de fois ou vous allez au quick ou mac donald par mois ");
	scanf ("%f",&e);

	printf ("tapez 4 si vous pratiquez du sport si non rentrez 5 ");
	scanf ("%f",&f);

	 if (f==4)
		 {

		printf ("si vous pratiquez le foot taper 6 si vous pratiquez le tennis taper 7 si vous pratiquez le basket taper 8 si vous pratiquez le judo taper 9 si vous pratiquez la natation taper 10 si vous ne pratiquez aucun de ces sports taper 11 ");
		scanf ("%f",&g);
		 }


		printf ("%f %f %f %f %f %f %f",a,b,c,d,e,f,g);


	 printf (" si vous voulez recomencer taper 1 ");
	 scanf ("%f",&h);




	 }


	getch();
}
