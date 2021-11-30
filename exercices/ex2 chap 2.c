#pragma hdrstop
#pragma argsused

#include <stdio.h>

#ifdef _WIN32
#include <tchar.h>
#else
  typedef char _TCHAR;
  #define _tmain main
#endif

int main(int argc, char *argv[])

{

	float t2[10]={1,45,-3,44,51,-6,68,47,12,-90};
	int t1[10]={0};
	int i;

	for (i = 0;i < 10;i ++)
	{
		printf("%f\n", t2[i]);
	}
	for (i = 0;i < 10;i ++)
	{
		if(t2[i] > 0)
		{
			  printf ("%f\n", t2[i]);
		}   getch();
	}
}

