#include <iostream>
using namespace std;


int main()
{
	int d,i;
	long sum;
	while( cin >> d ) {
		sum = 0;
		for( i = 0; i < 600; i += d ) {		
			sum += d * i * i;
		}
		printf("%d\n",sum);

	}
		

	return 0;
}