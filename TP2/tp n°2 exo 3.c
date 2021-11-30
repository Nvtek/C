#include <stdio.h>
#include <stdlib.h>
main()
{
	float a;
	int i;
	printf("renter un nombre a");
	scanf ("%f",&a);
	 if (a<20)
	 printf ("%f",3.00F);

	 else {

		if (a>=20 && a<50)
		 printf ("%f",3.95F);

		 else {
			   (a>=50);
			   printf ("%f", 5.90F);
			   }
		 }


	getch();
}
