

#include <iostream>
using namespace std;
int main(){
	while(true){

	int n,m;
	cin >> n;
	if(n == 0) return 0;
	m = 0;
	n = 1000-n;

	if(n>=500){
		m = n/500;
		n = n%500;
	}
	if(n>=100){
		m = m+n/100;
		n = n%100;
	}
	if(n>=50){
		m = m+n/50;
		n = n%50;
	}
	if(n>=10){
		m = m+n/10;
		n = n%10;
	}
	if(n>=5){
		m = m+n/5;
		n = n%5;
	}
	if(n>=1){
		m = m+n/1;
	}

	cout << m << endl;

	}

}
