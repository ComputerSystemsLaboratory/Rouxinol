#include <iostream>
using namespace std;

int main()
{
	int tmp, d[6];
	string dir;
	for (int i = 0; i < 6; i++)
		cin >> d[i];
	cin >> dir;
	for (int i = 0; i < (dir.size()); i++) {
		if(dir[i]=='E') {
			tmp = d[0];
			d[0] = d[3];
			d[3] = d[5];
			d[5] = d[2];
			d[2] = tmp;
		}
		else if(dir[i]=='W') {
			tmp = d[0];
			d[0] = d[2];
			d[2] = d[5];
			d[5] = d[3];
			d[3] = tmp;
		}
		else if(dir[i]=='S') {
			tmp = d[0];
			d[0] = d[4];
			d[4] = d[5];
			d[5] = d[1];
			d[1] = tmp;
		}
		else {
			tmp = d[0];
			d[0] = d[1];
			d[1] = d[5];
			d[5] = d[4];
			d[4] = tmp;
		}
	}
	cout << d[0] << endl;
	return 0;
}