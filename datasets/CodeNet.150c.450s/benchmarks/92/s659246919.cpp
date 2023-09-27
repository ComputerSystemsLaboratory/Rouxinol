#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main()
{
	int a,b,c;
	while(cin >> a >> b)
	{
		stringstream s;
	c = a+b;

	s << c;
	cout << s.str().size() << endl;
	}
	return 0;
}