#include <iostream>

using namespace std;

int main( void )
{
	int map[4];
	bool used[10];
	while(1) {
		bool eof = false;
		for(int i=0; i < 10; ++i) used[i] = false;
		for(int i=0; i < 4; ++i) {
			if(cin >> map[i]) {
				used[map[i]] = true;
			}
			else	{ eof = true; break; }
		}
		if(eof) break;
		int hit, br;
		hit = br = 0;
		for(int i=0; i < 4; ++i) {
			int inNum;
			cin >> inNum;
			if		(map[i] == inNum) ++hit;
			else if	(used[inNum]) ++br;
		}
		cout << hit << ' ' << br << endl;
	}
	return 0;
}