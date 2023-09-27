#include <iostream>
#define EMP -1000
 
using namespace std;

int stage[11][11]={};
int h;


void outStage(){
	for(int i=0;i<h;i++){
		for(int j=0;j<5;j++){
			cout<<stage[i][j];
		}
		cout<<endl;
	}
}

bool delStage(){
	bool conti=false;
	for(int i=0;i<h;i++){
		for(int j=0;j<3;j++){
			int samecount=1;
			int now=-1;
			for(int k=0;;k++){
				if(now==-1){					
					now=stage[i][j+k];
				}
				else if(now==stage[i][j+k] && now!=EMP){
					samecount++;
				}
				if( (now!=-1 && now!=stage[i][j+k]) || k==4){
					if(samecount>=3){
						conti=true;
						for(int l=0;l<samecount;l++){
							stage[i][j+l]=EMP;
						}
						samecount=1;
					}
					goto end;
				}
			}
			end:;
		}
	}
	return conti;
}


void downNum(){
	for(int t=0;t<h;t++){
		for(int i=1;i<h-t;i++){
			for(int j=0;j<5;j++){
				if( i-1>=0 && stage[i][j]==EMP){
					swap(stage[i][j],stage[i-1][j]);
				}
			}
		}
	}
}

int countScore(){
	int sum=0;
	for(int i=0;i<h;i++){
		for(int j=0;j<5;j++){
			if(stage[i][j]!=EMP)
				sum+=stage[i][j];
		}
	}
	return sum;
}

int main(){
	while(1){
		int sum=0;
		cin>>h;
		if(h==0)break;
		for(int i=0;i<h;i++){
			for(int j=0;j<5;j++){
				cin>>stage[i][j];
				sum+=stage[i][j];
			}
		}
//end input;

		while(1){
			if(delStage()==false)break;
			downNum();
		}
		cout<<sum-countScore()<<endl;
	}
	return 0;
}