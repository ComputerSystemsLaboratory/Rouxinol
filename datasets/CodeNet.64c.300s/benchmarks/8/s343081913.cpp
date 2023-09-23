#include <iostream>
using namespace std;

void check_num(int i){
	int x = i;
	if(x % 3 == 0 || x % 10 == 3){
		cout << ' ' << i;
	}
	else{
		do{
			x /= 10;
			if(x && x % 10 == 3){
				cout << ' ' << i;
				break;
			}
		}while(x);
	}
}
int main(){
	int n, i = 1;
	cin >> n;
	for(i = 1; i <= n; i++){
		check_num(i);
	}
	cout << endl;
}