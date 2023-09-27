#include <iostream>
#include <string>

using namespace std;

int main(){
	int n1,n2;
	char buf,*cf,*ct,*re;

	while(1){
		cin >> n1;
		if(n1 != 0){
			cf = new char[n1];
			ct = new char[n1];

			for(int i = 0; i < n1; i++){
				cin >> cf[i];
				cin >> ct[i];
			}

			cin >> n2;
			re = new char[n2];

			for(int i = 0; i < n2; i++){
				cin >> buf;

				for(int j = 0; j < n1; j++){
					if(buf == cf[j]){
						buf = ct[j];
						break;
					}
				}

				re[i] = buf;
			}

			for(int i = 0; i < n2; i++){
				cout << re[i];
			}
			cout << endl;
		}else{
			break;
		}
	}

	return 0;
}