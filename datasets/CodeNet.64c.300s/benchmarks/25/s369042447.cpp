#include <iostream>
#include <algorithm>
using namespace std;

int main(void)
{
	int a[4],b[4];

	while(cin >> a[0] >> a[1] >> a[2] >> a[3], !cin.eof()){
		cin >> b[0] >> b[1] >> b[2] >> b[3];

		int hit = 0, blow = 0;
		int num[10] = {};

		for(int i = 0; i < 4; i++){
			if(a[i] == b[i]){
				hit++;
				b[i] = 0;
			}
			num[a[i]]++;
		}
		for(int i = 0; i < 4; i++)
			if(num[b[i]] > 0)
				blow++;
		

		cout << hit << ' ' << blow << endl;
	}



	return 0;
}