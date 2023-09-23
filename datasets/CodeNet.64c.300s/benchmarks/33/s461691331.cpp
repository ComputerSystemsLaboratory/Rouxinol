#include <cstdio>
using namespace std;

int main()
{

	int  a, b;
	char query;

	while( scanf( "%d %c %d", &a, &query, &b ), query != '?' ) {

		switch( query ) {

			case '+':
				printf( "%d\n", a + b ); break;
			case '-':
				printf( "%d\n", a - b ); break;
			case '*':
				printf( "%d\n", a * b ); break;
			case '/':
				printf( "%d\n", a / b ); break;

		}

	}

	return 0;

}