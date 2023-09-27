#include <iostream>

using namespace std;

int main(){
	int faces[1+6];

	for(int i = 1; i <= 6; i++){
		cin >> faces[i];
	}

	int f, tmp;
	char direction;
	while(cin >> direction){
		switch(direction){
		case 'N':
			f = 5;
			break;
		case 'E':
			f = 3;
			break;
		case 'S':
			f = 2;
			break;
		case 'W':
			f = 4;
			break;
		}

		tmp = faces[f];
		faces[f] = faces[1];
		faces[1] = faces[7-f];
		faces[7-f] = faces[6];
		faces[6] = tmp;
	}

	cout << faces[1] << endl;

	return 0;
}