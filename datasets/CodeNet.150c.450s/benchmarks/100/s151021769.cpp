#include <iostream>
using namespace std;
long long factorial[21];
void init(){
	factorial[1] = 1;
	for(int i = 2;i < 21; i++){
		factorial[i] = factorial[i-1] * i;
	}
}
int main(){
	init();
	int n;
	while(cin >> n){
		cout << factorial[n] << endl;
	}
	return 0;
}