#include <iostream>
using namespace std;



int main(void){

	//??´?§?????§???¢??§????????????????????¶???a^2+b^2=c^2
	int N, a, b, c,L,M,S;

	cin >> N;

	
	for (int i = 0; i < N; i++){
		cin >> a >> b >> c;
		if ((a*a + b*b == c*c) || (a*a + c*c == b*b) || (c*c + b*b == a*a)){
			cout << "YES" << endl;
		}
		else{
			cout << "NO" << endl;
		}

	
	}
	return 0;
}