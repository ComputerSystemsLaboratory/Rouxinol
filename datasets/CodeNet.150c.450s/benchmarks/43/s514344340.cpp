#include <iostream>

using namespace std;

int main(){
	int n,a,b;
	while(cin >> n,n){
		int ta=0,tb=0;
		while(n--){
			cin >> a >> b;
			if(a>b)ta+=(a+b);
			else if(b>a)tb+=(a+b);
			else{
				ta+=a;tb+=b;
			}
		}
		cout << ta <<" "<< tb << endl;
	}
	return 0;
}