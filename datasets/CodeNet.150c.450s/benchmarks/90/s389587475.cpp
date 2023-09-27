#include <iostream>
#include <algorithm>
using namespace std;
int main(){
	int a[101] = {0};
	int input;
	while(cin >> input){
		a[input]++;
	}
	int m = 0;
	for(int i = 1; i < 101; i++){
		if(m < a[i]) m = a[i];
		//m = max(m, a[i]);
	}
	for(int i = 1; i < 101; i++){
		if(m == a[i]){
			cout << i << endl;
		}
	}
	return 0;
}