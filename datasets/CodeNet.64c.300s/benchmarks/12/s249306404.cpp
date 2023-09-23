// 
//#define DEBUG

#ifndef DEBUG

#include <stdio.h>

#else

#include "stdafx.h"

#endif // DEBUG



#include <stdio.h>

int main()
{
	int x,result;

	scanf("%d", &x);

	result = x * x *x;

	printf("%d\n", result);



	/***************************************/
	#ifndef DEBUG

	#else
		_gettch();
	#endif
	/***************************************/

	return 0;
}