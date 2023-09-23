
#include <iostream>
using namespace std;

int main() {
	int a,b;
	int n;
	while(1){
		int aten = 0,bten = 0;
		cin >> n;
		if(n == 0){
					break;
				}
		for(int i = 0; i < n; i++){
		cin >> a >> b;
		if(a > b){
			aten = aten + a + b;
		}
		else if(a == b){
			aten = aten + a;
			bten = bten + a;
		}
		else{
			bten = bten + b + a;
	}
		}
	cout << aten << " " << bten << endl;
	}
	return 0;
}