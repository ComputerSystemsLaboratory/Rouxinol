#include <iostream>
using namespace std;

int main(){
	int n;
	while(cin >> n){
		if(n > 36){
			cout << "0" << endl;
		} else {
			int count = 0;
			for(int a = 0; a < 10; a++){
				if((n - a >= 0) && (n - a <= 27)){
					for(int b = 0; b < 10; b++){
						if((n - a - b >= 0) && (n - a - b <= 18)){
							for(int c = 0; c < 10; c++){
								if((n - a - b - c >= 0) && (n - a - b - c <= 9))
									count++;
							}
						}
					}
				}
			}
			cout << count << endl;
		}
	}
	return 0;
}