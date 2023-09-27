#include <iostream>

using namespace std;

int main(void){
	int n;
	while(cin >> n){
		if(n == 0) break;
		int ap=0,bp=0;
		for(int i=0;i<n;i++){
			int a,b;
			cin >> a >> b;
			if(a > b){
				ap += a + b;
			}else if(a == b){
				ap += a;
				bp += b;
			}else{
				bp += a + b;
			}
		}
		cout << ap << " " << bp << "\n";
	}
}