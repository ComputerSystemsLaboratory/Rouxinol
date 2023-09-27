#include <iostream>
using namespace std;
int checked[31];
int main() {
	int r;
	for(int i=0;i<28;i++){
		cin >> r;
		checked[r]=1;
	}
	for(int i=1;i<=30;i++){
		if(checked[i]==0)
			cout << i << endl;
	}
	return 0;
}