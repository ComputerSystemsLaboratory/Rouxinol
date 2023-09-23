#include <iostream>
#include <algorithm>
using namespace std;

int main(){
	int b[101],a[101],n;
	for(int i=0;i<101;i++){
		a[i] = 0;
		b[i] = a[i];
	}
	while(cin >> n && n){
		a[n] = a[n] + 1;
		b[n] = a[n];
	}
	sort(b,b+101);
	for(int i=1;i<101;i++){
		if(a[i] == b[100]) cout << i << endl;
	}
	return 0;
}