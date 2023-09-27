#include<iostream>
using namespace std;

int main(){
	int n;
	int x=0;
	while (cin >> n){
		for (int i = 0; i < 10; i++){
			for (int j = 0; j < 10; j++){
				for (int k = 0; k < 10; k++){
					for (int l = 0; l < 10; l++){
						if (n == i + j + k + l){
							x = x + 1;
						}
					}
				}
			}
		}
		cout << x << endl;
		x = 0;
	}
}
