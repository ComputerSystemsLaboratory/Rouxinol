#include <iostream>
using namespace std;


int main()
{
	int number[32];
	int index, pairnum;
	int a,b,tmp,i;
	cin >> index;
	cin >> pairnum;
	for( i = 0; i <32; i++ ) {
		number[i] = i;
	}

	for( i = 0; i < pairnum; i++ ) {
		scanf("%d,%d",&a,&b);
		tmp = number[a];
		number[a] = number[b];
		number[b]= tmp;
	}

	for( i = 1; i < index+1; i++ ) {
		printf("%d\n",number[i]);

	}

	return 0;
}