#include <iostream>
#include <algorithm>
#include <string>
#include <cmath>
using namespace std;

int main(){
	int a,b,i = 0,c[200];
	while(cin >> a >> b){
		c[i] = a + b;
		i++;
	}
	for(int j = 0; j < i ; j++){
		int res = 0;
		while(c[j] > 0){
			res++;
			c[j] /= 10;
		}
		cout << res << endl;
	}
}
