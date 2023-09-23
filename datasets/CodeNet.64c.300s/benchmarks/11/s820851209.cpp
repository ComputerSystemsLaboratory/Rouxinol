#include <iostream>
#include <string>

using namespace std;

int main()
{
	int s;
	cin >> s;
	cout << s/60/60<<":"<<(s/60)%60<< ":" << (s%60) << endl;


	return 0;
}
