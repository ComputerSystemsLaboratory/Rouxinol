#include <iostream>
using namespace std;

int h(int a, int b){
	if(a==b){
		return 1;
	}
	else {
		return 0;
	}
}

int main(){
	int a[4], b[4];

	while (true)
	{
		cin >> a[0] >> a[1] >> a[2] >> a[3] >> b[0] >> b[1] >> b[2] >> b[3];
		if (cin.eof()) { break; }
		int hit = 0, blow = 0;
		for(int i=0;i<4;i++){
			for (int j = 0;j<4;j++){
				if (i==j){
					hit += h(a[i], b[j]);
				}
				else{
					blow += h(a[i], b[j]);
				}
			}
		}
		cout << hit << " " << blow << endl;
	}

	return 0;
}