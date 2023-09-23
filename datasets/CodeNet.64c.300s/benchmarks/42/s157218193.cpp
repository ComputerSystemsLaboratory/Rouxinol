#include <iostream>

using namespace std;

int main(){
	int n;
	while(cin>>n){
		if(n==0)break;

		int data[30][30];
		for(int i=0;i<30;i++){
			for(int j=0;j<30;j++){
				data[i][j]=0;
			}
		}
		for(int i=0;i<n;i++){
			int x,y;
			cin>>x>>y;
			data[x][y]=1;
		}
		int roboX=10,roboY=10;
		int m;
		int sum=0;
		cin>>m;
		for(int i=0;i<m;i++){
			char dir;
			int length;
			cin>>dir>>length;

			if(dir=='N'){
				for(int i=0;i<=length;i++){
					if(data[roboX][roboY+i]==1){
						sum++;
						data[roboX][roboY+i]=0;
					}
				}
				roboY+=length;
			}
			else if(dir=='S'){
				for(int i=0;i<=length;i++){
					if(data[roboX][roboY-i]==1){
						sum++;
						data[roboX][roboY-i]=0;
					}
				}
				roboY-=length;
			}
			else if(dir=='E'){
				for(int i=0;i<=length;i++){
					if(data[roboX+i][roboY]==1){
						sum++;
						data[roboX+i][roboY]=0;
					}
				}
				roboX+=length;
			}
			else if(dir=='W'){
				for(int i=0;i<=length;i++){
					if(data[roboX-i][roboY]==1){
						sum++;
						data[roboX-i][roboY]=0;
					}
				}
				roboX-=length;
			}
		}
		if(sum==n){
			cout<<"Yes"<<endl;
		}
		else{
			cout<<"No"<<endl;
		}
	}
	return 0;
}