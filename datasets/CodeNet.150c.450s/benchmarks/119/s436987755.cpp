#include <iostream>
using namespace std;

int w,h;
int field[51][51];
void dfs(int x,int y);

int main(){
	while(cin>>w>>h&&w!=0&&h!=0){
		for(int y=0;y<h;y++){
			for(int x=0;x<w;x++){
				cin>>field[y][x];
			}
		}
		int count=0;
		for(int y=0;y<h;y++){
			for(int x=0;x<w;x++){
				if(field[y][x]==1){
					dfs(x,y);
					count++;
				}
			}
		}
		cout<<count<<endl;
	}

}

void dfs(int x,int y){
	field[y][x]=-1;
	for(int i=-1;i<=1;i++){
		for(int j=-1;j<=1;j++){
			int mx=x+i;
			int my=y+j;

			if(mx<0||my<0||mx>=w||my>=h)continue;
			if(field[my][mx]==1){
				dfs(mx,my);
			}
		}
	}
}