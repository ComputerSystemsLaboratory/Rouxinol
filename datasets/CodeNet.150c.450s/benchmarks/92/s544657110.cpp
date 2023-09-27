#include <iostream>
#include <string>
using namespace std;

int main()
{
	int x, y;
	while (cin >> x >> y){
		cout << to_string(x + y).size() << "\n";
	}
	cout.flush();
}