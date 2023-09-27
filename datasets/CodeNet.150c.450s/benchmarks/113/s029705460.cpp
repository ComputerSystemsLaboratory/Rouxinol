#include <iostream>
using namespace std;

int main() {
	int x[10000];
	for(int i=0; i<10000; i++){
		cin >> x[i];
		if(x[i]==0){break;}
		cout << "Case " << i+1 << ": " << x[i] << endl;
	}
	return 0;
}