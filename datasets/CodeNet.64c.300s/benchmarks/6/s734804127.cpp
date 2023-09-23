#include <iostream>
using namespace std;
int main(){
	int n, c[120], b, f, r, v, t;
	cin >> n;
	for(int i = 0; i < 120; i++){
		c[i] = 0;
	}
	for(int i = 0; i < n; i++){
		cin >> b >> f >> r >> v;
		c[(b-1)*30+(f-1)*10+r-1] += v;
	}
	for(int i = 0; i < 15; i++){
		if(i%4 == 3){
			cout << "####################" << endl;
		}else{
			t = i - i/4;
			for(int j = 0; j < 10; j++){
				cout << " " << c[t*10+j];
			}
			cout << endl;
		}
	}
	return 0;
}