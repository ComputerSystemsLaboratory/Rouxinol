#include <iostream>
using namespace std;

int main() {
	int i, n[30]={0};
	while(cin >> i){
		n[i]++;
	}
	for(int j=1; j<30; j++){
		if(n[j]==0) cout << j << endl;
	}
	if(n[30]==0) cout << "30" << endl;
	return 0;
}
