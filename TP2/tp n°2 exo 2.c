#include <stdio.h>
#include <stdlib.h>
main()
{
	float a,b,c;
	int i;
	printf("renter un nombre a");
	scanf ("%f",&a);
	printf ("rentrez un nombre b");
	scanf ("%f",&b);
	printf ("rentrez un nombre c");
	 scanf ("%f",&c);
	 if (a<b && a<c )
	 {
		printf ("%f",a);
		if (b<c)
		{
			printf ("%f %f",b,c);
		}
			else {
				 printf ("%f %f",c,b);
				}
	 }
					 if (b<a && b<c )
				 {
					printf ("%f",b);
					if (a<c)
					{
						printf ("%f %f",a,c);
					}
						else {
							 printf ("%f %f",c,a);
							}
				 }
							if (c<a && c<b )
							 {
								printf ("%f",c);
								if (a<b)
								{
									printf ("%f %f",a,b);
								}
									else {
										 printf ("%f %f",b,a);
										}
							 }


	getch();
}
