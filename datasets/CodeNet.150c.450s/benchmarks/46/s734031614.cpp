#include <iostream>
using namespace std;


int main(void){
	int n,x;
	while(cin >> n >> x, !(n == 0 && x == 0) ){
		int ct = 0;
		for(int a1 = 1; a1 < (n+1); a1++ ){
			for(int a2 = a1+1; a2 < (n+1); a2++){
				for(int a3 = a2+1; a3 < (n+1); a3++){
					if( (a1+a2+a3) == x ) ct++;
				}
			}
		}
		cout << ct << endl;
	}
	return 0;
}