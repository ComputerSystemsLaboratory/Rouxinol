#include <iostream>

using namespace std;

int main(){
	int n,a,b,pa,pb;

	while(1){
		cin >> n;
		if(n != 0){
			pa = pb = 0;

			for(; n > 0; n--){
				cin >> a;
				cin >> b;

				if(a > b){
					pa += a + b;
				}else if(a < b){
					pb += a + b;
				}else{
					pa += a;
					pb += b;
				}
			}

			cout << pa << " " << pb << endl;
		}else{
			break;
		}
	}

	return 0;
}