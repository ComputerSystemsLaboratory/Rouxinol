#include <iostream>

using namespace std;

int main(void){
	int d,i,S;
	while(cin >> d){
		for(i=1,S=0;i<600/d;i++)
			S+=d*d*d*i*i;
		cout << S << endl;
	}
}