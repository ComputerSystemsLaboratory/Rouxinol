#include <iostream>
using namespace std;

int main(){
	int a,b,tmp;
	cin >> a;
	cin >> b;
	while(1){
		if(b==0){
			cout << a <<endl;
			break;
		}else{
			tmp = a;
			a = b;
			b = tmp % b;
		}
	}	
	return 0;
}