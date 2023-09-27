#include "iostream"
#include "string"
using namespace std;

int main(int argc, char const *argv[])
{
	string x;
	int m=0;
	int h=0;
	

	while(cin >> x)
	{
		m=0;
		h=0;
		if (x == "-")
		{
			break;
		}

		cin >> m;

		for(int i=0; i<m; i++)
		{
			cin >> h;
			// cout << "substr = " <<  x.substr(0,h-1);
			x += x.substr(0,h);
			x.erase(0,h);
		}
		cout << x << endl;
	}

	return 0;
}

