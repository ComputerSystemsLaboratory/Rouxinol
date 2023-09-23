#include<iostream>

using namespace std;
#define RENT 100000
int main(){
	int n, ans;
	int counter = 0;
	while (cin >> n){
		counter = 0;
		for (int i = 0; i < 10; i++){
			for (int q = 0; q < 10; q++){
				for (int w = 0; w < 10; w++){
					for (int e = 0; e < 10; e++){
						ans = i + q + w + e;
						if (ans == n){
							counter += 1;
						}
					}
				}
			}
		}
		cout << counter << endl;
	}
}