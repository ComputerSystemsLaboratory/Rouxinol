#include <iostream>
int main()
{
	int a[4],b[4];
	int A,B;
	A=B=0;
	for(int i=0; i<4; i++)std::cin>>a[i],A+=a[i];
	for(int i=0; i<4; i++)std::cin>>b[i],B+=b[i];
	printf("%d\n",A>B?A:B);
	return 0;
}