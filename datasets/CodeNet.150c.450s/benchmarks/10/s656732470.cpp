#include<iostream>
#define FLOOR 3
#define ROOM 10
#define BUILDING 4
using namespace std;
int main(){
	int uni_map[BUILDING][FLOOR][ROOM] = {0};
	int n, b, f, r, v, i, j, k;
	cin>>n;
	for(i = 0; i < n; i++){
		cin>>b>>f>>r>>v;
		uni_map[b-1][f-1][r-1] += v;
	}
	for(i=0;i<BUILDING;i++){
		for(j=0;j<FLOOR;j++){
			for(k=0;k<ROOM;k++){
				cout << " " << uni_map[i][j][k];
			}
			cout << endl;
		}
		if(i != BUILDING - 1) cout << "####################\n";
	}
	return 0;
}