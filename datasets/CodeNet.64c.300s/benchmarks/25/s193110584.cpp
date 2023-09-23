#include <iostream>

using namespace std;

int main(void) {
	while(1) {
		int nu1[4], nu2[4];
		int hit = 0, blow = 0;
		
		cin >> nu1[0];
		if( cin.eof() )		break;
		
		for(int i = 1; i < 4; i++)
			cin >> nu1[i];
		for(int i = 0; i < 4; i++)
			cin >> nu2[i];
		
		for(int i = 0; i < 4; i++) {
			/*HIT*/
			if(nu1[i] == nu2[i]) {
				hit++;
			}
			/*BLOW*/
			for(int j = 0; j < 4; j++) {
				if(nu1[i] == nu2[j]) {
					blow++;
					break;
				}
			}
		}
		
		cout << hit << ' ' << blow - hit << endl;
	}
	
	return 0;
}