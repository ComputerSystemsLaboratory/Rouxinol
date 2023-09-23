#include <iostream>
using namespace std;

int main(){
	int a1, a2, a3, a4;
	int b1, b2, b3, b4;
	int hit = 0;
	int blow = 0;

	while(cin >> a1 >> a2 >> a3 >> a4){
		cin >> b1 >> b2 >> b3 >> b4;

		hit = 0;
		blow = 0;


		if(a1 == b1){
			hit++;
		}
		if(a2 == b2){
			hit++;
		}
		if(a3 == b3){
			hit++;
		}
		if(a4 == b4){
			hit++;
		}
		if(a1 == b2 || a1 == b3 || a1 == b4){
			blow++;
		}
		if(a2 == b1 || a2 == b3 || a2 == b4){
			blow++;
		}
		if(a3 == b1 || a3 == b2 || a3 == b4){
			blow++;
		}
		if(a4 == b1 || a4 == b2 || a4 == b3){
			blow++;
		}

		cout << hit << " " << blow << endl;
	}

}