#include <iostream>
#include <sstream>
#include <cstring>

using namespace std;

int main()
{
	int a, b;
	
	while (cin >> a >> b){
		int sum = a + b;
		stringstream ss;
		ss << sum;
		cout << ss.str().size() << endl;
	}
	return (0);
}