#include <iostream>
using namespace std;

int main(){
	int n;
	cin>>n;
	int *d = new int[4*3*10];
	for(int i=0; i<4*3*10; i++){
		d[i] = 0;
	}
	while(n--){
		int b,f,r,v;
		cin>>b>>f>>r>>v;
		d[3*10*(b-1)+10*(f-1)+(r-1)] += v;
	}
	for(int a=0; a<4; a++){
		for(int b=0; b<3; b++){
			for(int c=0; c<10; c++){
				cout << " " << d[3*10*a+10*b+c];
			}
			cout << endl;
		}
		if(a!=3) cout << "####################" << endl;
	}
}