#include<iostream>

using namespace std;

int main(){
	int a[4], b[4];

	while (cin >> a[0] >> a[1] >> a[2] >> a[3] >> b[0] >> b[1] >> b[2] >> b[3]){
		//hit
		int hit = 0;
		for (int i = 0; i < 4; i++)
			hit += (a[i] == b[i]);


		//blow
		int blow = 0;
		for (int i = 0; i < 4; i++)
			blow += ((a[i] == b[0]) || (a[i] == b[1]) || (a[i] == b[2]) || (a[i] == b[3]));

		cout << hit << " " << blow - hit << endl;
	}

	return 0;

}