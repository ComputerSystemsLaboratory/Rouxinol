#include <iostream>
using namespace std;

int main() {
	int n, max;
	while(true){
		cin >> n >> max;
		if(n == 0 && max ==0) break;
		if(n == 0 && max == 0) return 0;
		int count = 0;
		for(int i = 1; i <= n; i++){
			for(int j = i+1;j <= n; j++){
				for(int k = j+1; k <= n; k++){
					if(i + j + k == max) count++;
				}
			}
		}
		cout << count << endl;
	}
	// your code goes here
	return 0;
}