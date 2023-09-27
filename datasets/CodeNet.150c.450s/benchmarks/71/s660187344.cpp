#include <stdlib.h>
#include <string>
#include <vector>
#include <algorithm>
#include <iostream>


/*
	HOME-  Volume0-0008
	Submit Statistics
	 
	PCK 2003
	Sum of 4 Integers
	Time Limit : 1 sec, Memory Limit : 32768 KB
	English version is here

	Sum of 4 Integers

	50 ÈºÌ³Ì® n ðüÍµA0 ` 9 ÌÍÍÌ® a, b, c, d ÌgÅ

	        a + b + c + d = n

	ð½·àÌÌgÝí¹ðoÍ·évOðì¬µÄº³¢B

	á¦ÎAn ª 35 ÌÆ«A(a, b, c, d) Í (8,9,9,9)A(9,8,9,9)A(9,9,8,9)A(9,9,9,8) Ì 4 ÊèÅ·ÌÅA¦Í 4 ÆÈèÜ·B
	Input

	¡Ìf[^Zbgª^¦çêÜ·Bef[^ZbgÉ n ªPsÉ^¦çêÜ·BüÍÌÅãÜÅµÄº³¢B
	Output

	ef[^Zbg²ÆÉAa, b, c, d ÌgÝí¹ÂðPsÉoÍµÄº³¢B
	Sample Input

	35
	1

	Output for the Sample Input

	4
	4
*/

using namespace std;


int main()
{
	string s;
	
	while (getline(cin, s))
	{
		int n;
		sscanf(s.c_str(), "%ld", &n);
		
		int x = 0;
		for (int a = 0; a <= 9; a++)
		for (int b = 0; b <= 9; b++)
		for (int c = 0; c <= 9; c++)
		for (int d = 0; d <= 9; d++)
		{
			if (n == (a + b + c + d))
			{
				x++;
			}
		}
		
		printf("%d\n", x);
	}

	return 0;
}