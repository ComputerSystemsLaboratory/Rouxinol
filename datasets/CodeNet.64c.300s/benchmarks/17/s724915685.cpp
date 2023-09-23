#include <iostream>
using namespace std;

int main(){
	int x, y, s, a;
	while(cin >> x >> y >> s, x){
		a = 0;
		for(int i = 1;i < s;++i){
			for(int j = 1;j < s;++j){
				int px, py;
				px = (int)(i * (100 + x) / 100.) + (int)(j * (100 + x) / 100.);
				if(px == s){
					py = (int)(i * (100 + y) / 100.) + (int)(j * (100 + y) / 100.);
					a = a < py ? py : a;
				}
			}
		}
		cout << a << endl;
	}
	return 0;
}