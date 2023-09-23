#include <iostream>

using namespace std;

int main() {
	int size = 4;
	int ina[size];
	int inb[size];
	while(true){
		int hit=0, blow=0;
		cin>>ina[0]>>ina[1]>>ina[2]>>ina[3];
		cin>>inb[0]>>inb[1]>>inb[2]>>inb[3];
		if(cin.eof()) break;
		for(int i=0; i<size; i++) {
			if(ina[i] == inb[i]) hit++;
			for(int j=0; j<size; j++){
				if(i==j) continue;
				if(ina[i] == inb[j]) blow++;
			}
		}
		cout<<hit<<" "<<blow<<endl;
	}
	return 0;
}