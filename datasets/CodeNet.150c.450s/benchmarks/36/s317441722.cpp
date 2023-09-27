#include <iostream>

using namespace std;
#define f(x) x*x

int main()
{
	int d,i;
	while(cin >>d){
		int area = 0;
		for(i=d;i<600;i+=d){
			area += f(i)*d;
		}
		cout << area << endl;
	}
	return 0;
}