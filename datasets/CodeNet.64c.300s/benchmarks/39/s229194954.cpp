#include <iostream>
using namespace std;
#define F(i) for (int i=0; i<10; i++)
int main()
{
	int n;
	while(cin >> n){
		int count = 0;
		F(a)F(b)F(c)F(d)if(a+b+c+d==n) count++;
		cout << count << endl;
	}
	return(0);
}