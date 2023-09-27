#include<iostream>

#define MAXMAP 21

using namespace std;

const int dx[]={0,1,-1,0},dy[]={1,0,0,-1};
const char direction[]={'N','E','W','S'};
bool myMap[MAXMAP][MAXMAP]={false};


int main(){
	int N,M,nowX,nowY;
	bool flag;
	
	while(cin>>N){
		
		if(N==0){
			break;
		}
		fill((bool*)myMap,(bool*)(myMap+MAXMAP),false);
		nowX=nowY=10;
		flag=false;
		
		for(int i=0;i<N;i++){
			int x,y;
			cin>>x>>y;
			myMap[y][x]=true;
		}
		
		cin>>M;
		for(int i=0;i<M;i++){
			char tempDirec;
			int distance,tempDist;
			
			cin>>tempDirec>>distance;
			
			
			for(int j=0;j<4;j++){
				if(tempDirec==direction[j]){
					
					
					if(dx[j]!=0){
						tempDist=nowX+dx[j]*distance;
						if(dx[j]==1){
							for(int k=nowX;k<=tempDist;k++){
								if(myMap[nowY][k]){
									myMap[nowY][k]=false;
								}
							}
						}
						else if(dx[j]==-1){
							for(int k=nowX;k>=tempDist;k--){
								if(myMap[nowY][k]){
									myMap[nowY][k]=false;
								}
							}
						}
						nowX=tempDist;
					}
					
					
					if(dy[j]!=0){
						tempDist=nowY+dy[j]*distance;
						if(dy[j]==1){
							for(int k=nowY;k<=tempDist;k++){
								if(myMap[k][nowX]){
									myMap[k][nowX]=false;
								}
							}
						}
						else if(dy[j]==-1){
							for(int k=nowY;k>=tempDist;k--){
								if(myMap[k][nowX]){
									myMap[k][nowX]=false;
								}
							}
						}
						nowY=tempDist;
					}
					
					
					break;
				}
			}
		}
		
		
		for(int i=0;i<MAXMAP;i++){
			for(int j=0;j<MAXMAP;j++){
				if(myMap[i][j]==true){
					flag=true;
					//cout<<"i="<<i<<" j="<<j<<endl;
					break;
				}
			}
		}
		
		
		if(flag){
			cout<<"No"<<endl;
		}
		else{
			cout<<"Yes"<<endl;
		}
	}
}