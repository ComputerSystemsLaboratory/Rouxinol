#include<iostream>

using namespace std;

#define HMAX 10

int main(){

	int H;
	int puzz[HMAX][5];
	bool lf,ff;
	int cnt,bef;
	int score;

	while(1){
		cin>>H;
		if(H==0) break;
		for(int i=0;i<H;i++){
			for(int j=0;j<5;j++){
				cin>>puzz[i][j];
			}
		}
		score=0;
		while(1){
			lf=false;
			for(int i=0;i<H;i++){
				bef=puzz[i][0];
				cnt=1;
				for(int j=1;j<6;j++){
					if(j!=5&&bef==puzz[i][j]) cnt++;
					else if(cnt<3||bef==-1){
						cnt=1;
						bef=puzz[i][j];
					}
					else{
						for(int k=j-cnt;k<j;k++){
							puzz[i][k]=-1;
						}
						score+=bef*cnt;
						lf=true;
						break;
					}
				}

			}
			if(!lf) break;
			while(1){
				ff=false;
				for(int i=0;i<H-1;i++){
					for(int j=0;j<5;j++){
						if(puzz[i+1][j]==-1&&puzz[i][j]!=-1){
							puzz[i+1][j]=puzz[i][j];
							puzz[i][j]=-1;
							ff=true;
						}
					}
				}
				if(!ff) break;
			}
		}
		cout<<score<<endl;
	}
}