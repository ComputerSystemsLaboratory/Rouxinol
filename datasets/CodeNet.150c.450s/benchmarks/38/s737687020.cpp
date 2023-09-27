#include <iostream>
using namespace std;

bool check(int a,int b,int c){
	if(a*a==(b*b+c*c)) return true;
	else return false;
}

int main(void){
	int a,b,c;
	int N;
	int i;

	cin >> N;

	for(i=0;i<N;i++){
		cin >> a >> b >> c;
		if(check(a,b,c)||check(b,a,c)||check(c,a,b)){
			cout << "YES" << endl;
		}
		else{
			cout << "NO" << endl;
		}
	}
	return 0;
}