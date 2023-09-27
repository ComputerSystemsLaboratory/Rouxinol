#include <iostream>
using namespace std;
int dx,dy,x,y,n,count;
int road[20][20];

void check(int i,int j){
	if(i>dx||j>dy)return;
	if(i==dx&&j==dy){
		count++;
		return;
	}
	if(road[i][j]==-1)return;
	check(i,j+1);
	check(i+1,j);
	return;
}



int main(){
	while(1){
		cin >>dx >>dy;
		if(dx==0&&dy==0)break;
		for(int i=1;i<=dx;i++){
			for(int j=1;j<=dy;j++){
				road[i][j]=0;
			}
		}
		cin >> n;
		for(int i=0;i<n;i++){
			cin >> x>>y;
			road[x][y]=-1;
		}
		count=0;
		check(1,1);
		cout << count<<endl;
	}
	return 0;
}