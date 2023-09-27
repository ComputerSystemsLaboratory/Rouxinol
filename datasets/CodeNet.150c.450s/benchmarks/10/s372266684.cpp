#include<iostream>
using namespace std;

int main(){

	int room[4][3][10];
	int b,f,r,v;

	for (b=0; b<4; b++){
		for (f=0; f<3; f++){
			for (r=0; r<10; r++){
				room[b][f][r]=0;
			}
		}
	}
	
	int n;
	cin >>n;
	
	for (int i=0; i<n; i++){
		int x,y,z,w;
		cin >> x >> y >> z >> w ;
		for (b=0; b<4; b++){
			for (f=0; f<3; f++){
				for (r=0; r<10; r++){
					if (b==x-1 && f==y-1 && r==z-1) room[b][f][r]+=w;
					if (room[b][f][r]<0) room[b][f][r]=0;
				}
			}
		}		
	}

	for (b=0; b<4; b++){
		for (f=0; f<3; f++){
			for (r=0; r<10; r++){
				if (room[b][f][r]==0) cout << " " << 0 ;
				else cout << " " << room[b][f][r] ;
			}
			cout << "\n";
		}
		if (b!=3) cout << "####################" << "\n";
	}

	return 0;
}