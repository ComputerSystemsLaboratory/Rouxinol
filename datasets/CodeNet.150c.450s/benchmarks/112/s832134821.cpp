#include <map> 
#include <iostream>
#include <string>
using namespace std;

int main()
{
	map<char, char> mp;
	char a,b,c;
	string x;
	int n;
	cin >> n;
	do{
		mp.clear();
		x.clear();
		do{
			cin >> a >> b;
			mp[a] = b;
		} while (--n);
		
		cin >> n;
		do{
			cin >> c;
			if (mp[c] != NULL) {
				x += mp[c];
			}
			else {
				x += c;
			}
		} while (--n);	
		cout << x << endl;
	} while (cin >> n, n != 0);

	return 0;
}