#include <iostream>
#include <math.h>

using namespace std;

int main(){
	int a[101] = {0};
	int b;
	int MAX = 0;

	while(cin >> b){
		a[b]++;
	}
	for(int j=1; j<101; j++){
		MAX = max(MAX, a[j]);
	}
	for(int m=1; m<101; m++){
		if(MAX == a[m]){
			cout << m << endl;
 		}
	}
}