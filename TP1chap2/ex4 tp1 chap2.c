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

	int t[100];
	int i;
	int nb;
	for(i=0;i<100;i++){
	t[i]=1;
	}
	for(i=1;i<100;i++){

	  if(((i + 1) > 2 && (i+1)%2==0) ||
	  ((i + 1) > 3 && (i+1)%3==0) ||
	  ((i + 1) > 5 && (i+1)%5==0) ||
	  ((i + 1) > 7 && (i+1)%7==0) ){

		t[i]=0;

	  }

	}


	for(i=0;i<100;i++)
	{

		printf("%3d - %d\n",(i + 1), t[i]);

	}
	system("PAUSE");

	return 0;
}
