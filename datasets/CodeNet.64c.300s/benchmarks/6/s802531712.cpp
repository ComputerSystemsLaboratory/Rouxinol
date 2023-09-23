#include <iostream>
using namespace std;

int main(){
	int n,b,f,r,v;
	int room[5][4][11];
	cin >> n;

	for( b=1; b<=4;b++){
		for( f=1; f<=3; f++){
			for( r=1; r<=10; r++){
				room[b][f][r]=0;
			}
		}
	}


	for(int x=0; x<n; x++){
		cin >> b >> f >> r >> v;
		room[b][f][r] += v;
	}


	for(int b= 1; b <= 4; b++){
		for(int f = 1; f <= 3; f++){
			for(int r = 1; r <= 10; r++){
				cout << " " << room[b][f][r];
			}
			cout << "\n";
		}
		
		if( b!= 4)
			cout << "####################\n" ;
	}                

	return 0;
}