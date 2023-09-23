#include <iostream>
using namespace std;

int func(int n, int s, int i){
	if(!n){
    	if(!s)return 1;
    	else return 0;
    }
	if(i >= 10 || s-i < 0)return 0;
	return func(n, s, i+1) + func(n-1, s-i, i+1);
}

int main(){
	int n, s;
	while(cin >> n >> s && (n || s)){
		cout << func(n, s, 0) << endl;
	}
	return 0;
}