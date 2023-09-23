#include<iostream>
using namespace std;

int main(){
	int n, x;
	int l[101] = { 0 };
	int length;
	for (int i = 0; ; i++){
		cin >> n >> x;
		if (n == 0 && x == 0){
			length = i;
			break;}
		for (int j = 0; j < n; j++){
			for (int k = 0; k < n; k++){
				for (int m = 0; m < n; m++){
					if (j != k&&j != m&&k != m) {
						if (j + k + m + 3 == x){
							l[i] += 1;
						}
					}
				}
			}
		}
	}
	for (int i = 0; i < length; i++){
		cout << l[i]/6 << endl;
	}
	char c;
	cin >> c;
}