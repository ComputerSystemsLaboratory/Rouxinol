#include <iostream>
#include <string.h>
using namespace std;
   
int main()
{
	int n, ts=0, hs=0;
	char t[100],h[100];
	cin >> n;
	while (n--) {
		cin >> t >> h;
		if (strcmp(t,h)>0)
			ts += 3;
		else if (strcmp(t,h)<0)
			hs += 3;
		else {
			ts += 1;
			hs += 1;
		}
	}
	cout << ts << ' ' << hs << endl;
	return 0;
}