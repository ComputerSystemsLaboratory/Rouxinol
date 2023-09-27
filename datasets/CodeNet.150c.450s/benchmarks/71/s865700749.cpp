#include<iostream>
using namespace std;
int main(){
	int a, b, c, d,f;
	int e=0;
	while (cin >> e){
		f = 0;
		for (a = 0; a < 10; a++){
			for (b = 0; b < 10; b++){
				for (c = 0; c < 10; c++){
					for (d = 0; d < 10; d++){
						if (e == a + b + c + d){
							f = f + 1;
						}
					}
				}
			}
		}
		cout << f << endl;
	}
	return 0;
}