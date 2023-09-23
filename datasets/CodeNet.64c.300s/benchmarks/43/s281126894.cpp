#include<iostream>
using namespace std;

int main(){

	int p, pt1, pt2;
	
	pt1 = 0;
	pt2 = 0;
	
	for(int i=0; i<2; i++){
		for(int j=0; j<4; j++){
			cin >> p;
			if(i == 0) pt1 += p;
			else pt2 += p;
		}
	}
	
	if(pt1 > pt2) cout << pt1 << endl;
	else if(pt1 < pt2) cout << pt2 << endl;
	else cout << pt1 << endl;

	return 0;

}