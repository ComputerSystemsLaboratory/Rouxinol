#include <iostream>
using namespace std;

int main() {
	int n;
	int a, b;
	int sumA, sumB;
	while(1){
		cin >> n;
		if(n == 0){
			break;
		}
		
		sumA = 0;
		sumB = 0;
		for(int i = 0; i < n; i++){
			cin >> a >> b;
			if(a > b){
				sumA += a + b;
			}else if(a < b){
				sumB += a + b;
			}else{
				sumA += a;
				sumB += b;
			}
		}
		
		cout << sumA << " " << sumB << endl;
	}
	return 0;
}