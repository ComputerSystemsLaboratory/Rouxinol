#include <iostream>
using namespace std;
#define x 1000000
int main(){
	bool q[x];
	for(int i=2;i<x;i++) q[i] = true;
	for(int i=2;i<x;i++) if(q[i]) for(int j=2;j<=x/i;j++) q[i*j] = false;
	int n;
	while(cin >> n){
		int a = 0;
		for(int i=2;i<=n;i++) if(q[i]) a++;
		cout << a << endl;
	}
}