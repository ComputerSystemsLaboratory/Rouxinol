#include <iostream>
#include <string>
using namespace std;
int main()
{
	int n, i, t = 0, h = 0;
	cin >> n;

	string tw, hw;
	for( i = 0; i < n; ++i){
		cin >> tw >> hw;
		if( tw > hw ) t += 3;
		else if( tw < hw ) h += 3;
		else{
			t += 1;
			h += 1;
		}
	}

	cout << t << " " << h << "\n";

	return 0;
}