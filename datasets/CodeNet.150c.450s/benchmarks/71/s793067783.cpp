#include <iostream>
using namespace std;

int main(){
	int a, n;
	while(cin >> n){
	a = 0;
	for(int i = 0;i < 10;i++){
		for(int j = 0;j < 10;j++){
			for(int k = 0;k < 10;k++){
				for(int t = 0;t < 10;t++){
					if(i + j + k + t == n)a++;
				}
			}
		}
	}
	cout << a << endl;
	}
	return 0;
}