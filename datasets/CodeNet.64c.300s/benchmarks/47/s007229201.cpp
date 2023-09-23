#include <iostream>
using namespace std;

int d[101]={0};

int main(void){

	while (true){
		int n;
		cin>>n;
		if (cin.eof()) break;
		d[n]++;
	}
	int tmp=d[0];
	for (int i=0; i<101; i++) if (d[i]>tmp) tmp=d[i];
	for (int i=0; i<101; i++) if (d[i]==tmp) cout<<i<<endl;

	return 0;
}