//#include<studio.h>
#include<iostream>

using namespace std;
int main()
{
	int a, b;
	//scanf("%d %d", &a, &b);
	cin >> a >> b;
	int mense = a*b;int nagasa = 2 * (a + b);
//	printf("%d %d", &mense, &nagasa);
	cout << mense << " "<<nagasa<<endl;
	return 0;
}