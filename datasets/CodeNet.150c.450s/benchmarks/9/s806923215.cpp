#include <iostream>
#include <string>
using namespace std;
int main()
{
	string w;
	int m, h, i, k, s;

	while( true )
	{
		cin >> w;
		if(w == "-")
			break;

		k = 0;
		s = w.size();

		cin >> m;
		for(i = 0; i < m; ++i){
			cin >> h;
			k += h;
		}

		for(i = 0; i < s; ++i)
			cout << w[(i+k)%s];
	
		cout << "\n";
	}

	return 0;
}