#include <iostream>
using namespace std;

int main() {
	int p;
	int c[6]={500,100,50,10,5,1};
	while(1){
		cin >>p;
		if(p==0){return 0;}
		int n=0;
		int ch=1000-p;
		for(int i=0;i<6;i++){
			n+=ch/c[i];
			ch=ch%c[i];
		}
		cout << n << endl;
	}
}