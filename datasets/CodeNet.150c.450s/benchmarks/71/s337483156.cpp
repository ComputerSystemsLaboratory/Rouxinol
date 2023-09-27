#include <iostream>

using namespace std;

int main(){

	int n;
	int a , b , c , d;
	int ans , count;

	while(cin >> n){
		if(n == 0) break;

		count = 0;

		for(a = 0; a <= 9; a++){
			for(b = 0; b <= 9; b++){
				for(c = 0; c <= 9; c++){
					for(d = 0; d <= 9; d++){

						ans = a + b + c + d;
						if(ans == n){
							count++;
						}
					}
				}
			}
		}

		cout << count << endl;
	
	}

	return 0;
}