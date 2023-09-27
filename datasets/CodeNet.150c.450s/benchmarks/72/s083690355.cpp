#include<iostream>
using namespace std;


int main (void)
{
	char a[1200];
	int out;
	fgets(a, 1200, stdin);
		/*for ( int q = 1; q < 1200; q++)
		{
			scanf("%c" , &a[q]);
			if ( a[q] == '\n') break;
			out = q;
		}*/
		
		for ( int z = 0; a[z] != '\0'; z++)
		{
			if ( a[z] >= 'A' && a[z] <= 'Z')
			{
				printf("%c", a[z] + 32);
				//cout << a[z] - 32;
			}
			else if ( a[z] >= 'a' && a[z] <= 'z')
			{
				printf("%c", a[z] - 32);
				//cout << a[z] + 32;
			}
			else
			{
				printf("%c",a[z]);
			}
		}
	return 0;
}
