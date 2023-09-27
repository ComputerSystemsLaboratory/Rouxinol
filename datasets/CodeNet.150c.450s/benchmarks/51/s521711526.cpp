#include <iostream>
#include <cstring>
int main()
{
	int number[31];
	memset(number,0,sizeof(number));
	for(int i=0; i<30; i++){
		int a; std::cin>>a;
		number[a] = 1;
	}
	for(int i=1; i<31; i++)
		if( !number[i] )printf("%d\n",i);
	return 0;
}