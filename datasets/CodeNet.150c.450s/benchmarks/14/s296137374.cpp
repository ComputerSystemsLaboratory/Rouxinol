#include <iostream>
using namespace std;

void CheckNum(int i);

int main(){
	int n;
	cin >> n;

	int i = 1;
	while(true){

		if(i % 3 == 0){
			cout << " " << i;
		}else{
			int x = i;
			while(0 < x){
				if(x % 10 == 3){
					cout << " " << i;
					break;
				}
				x /= 10;
			}
		}

		if(n < ++i) break;
	}

	cout << endl;
	return 0;
}