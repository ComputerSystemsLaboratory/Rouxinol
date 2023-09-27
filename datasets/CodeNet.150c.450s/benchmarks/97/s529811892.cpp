#include <iostream>

using namespace std;

void count(int map[400][400]){
	int x,y;
	int fg=400;
	for(int i=400-1;i>=0;i--){
		for(int j=0;j<400;j++){
			if(fg==400 && map[j][i]==1){
				fg=i;
				i=-1;
				break;
			}
		}
	}
	x=fg;
	fg=-1;
	for(int i=0;i<400;i++){
		for(int j=0;j<400;j++){
			if(fg==-1 && map[j][i]==1){
				fg=i;
				i=400;
				break;
			}
		}
	}
	x-=fg;

	fg=400;
	for(int i=400-1;i>=0;i--){
		for(int j=0;j<400;j++){
			if(fg==400 && map[i][j]==1){
				fg=i;
				i=-1;
				break;
			}
		}
	}
	y=fg;
	fg=-1;
	for(int i=0;i<400;i++){
		for(int j=0;j<400;j++){
			if(fg==-1 && map[i][j]==1){
				fg=i;
				i=400;
				break;
			}
		}
	}
	y-=fg;

	cout << y+1 <<" ";
	cout << x+1 << endl;

}

int main(void){
	int n;
	int map[400][400];
	int pos[200][2];
	int np,dp;
		//left0 riht2 under1 top3

	while(1){
		cin >> n;
		if(n==0) return 0;
		for(int i=0;i<200;i++){
			pos[i][0]=-20;
			pos[i][1]=-20;
		}
		for(int i=0;i<400;i++){
			for(int j=0;j<400;j++) map[i][j]=0;
		}
		pos[0][0]=200;
		pos[0][1]=200;
		map[pos[0][1]][pos[0][0]]=1;

		for(int i=1;i<n;i++){
			cin >> np;
			cin >> dp;
			switch(dp){
				case 0://left
					pos[i][0]=pos[np][0]-1;
					pos[i][1]=pos[np][1];
					break;
				case 1://under
					pos[i][0]=pos[np][0];
					pos[i][1]=pos[np][1]+1;
					break;
				case 2://riht
					pos[i][0]=pos[np][0]+1;
					pos[i][1]=pos[np][1];
					break;
				case 3: // top
					pos[i][0]=pos[np][0];
					pos[i][1]=pos[np][1]-1;
					break;
			}
			map[pos[i][0]][pos[i][1]]=1;
		}
		count(map);
	}

	return 0;
}