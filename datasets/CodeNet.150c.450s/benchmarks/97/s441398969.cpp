#include <iostream>
using namespace std;

int masu[404][404];

int main(){
	int n;
	while(cin>>n){
		if(n==0) break;
		if(n==1){
			cout<<"1 1"<<endl;
			continue;
		}
		for(int i=0; i<404; i++){
			for(int j=0; j<404; j++){
				masu[i][j] = -1;
			}
		}
		masu[201+0][201+0] = 0;
		for(int k=1; k<n; k++){
			int m, d;
			cin>>m>>d;
			int x, y;
			for(int i=0; i<404; i++){
				for(int j=0; j<404; j++){
					if(masu[i][j] == m){
						x = i;
						y = j;
					}
				}
			}
			if(d==0) masu[x-1][y] = k;
			else if(d==1) masu[x][y+1] = k;
			else if(d==2) masu[x+1][y] = k;
			else if(d==3) masu[x][y-1] = k;
		}
		int mue, msita, mhidari, mmigi;
		mue = 500;
		msita = -1;
		mhidari = 500;
		mmigi = -1;
		for(int i=0; i<404; i++){
			for(int j=0; j<404; j++){
				if(masu[i][j] != -1){
					mue = min(mue, j);
					msita = max(msita, j);
					mhidari = min(mhidari, i);
					mmigi = max(mmigi, i);
				}
			}
		}
		cout<<mmigi-mhidari+1<<" "<<msita-mue+1<<endl;
	}
}