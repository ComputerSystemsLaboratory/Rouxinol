#include<iostream>
#include<algorithm>
using namespace std;
int map[20][5];
int h,ans;
void DFS(){
	bool move=false;
	for(int i=0;i<h;i++){
		int cnt=0,set=0;
		for(int j=0;j<5;j++){
			if(map[i][j]!=set){
				if(cnt>=3&&set!=0){
					for(int k=0;k<cnt;k++){
						ans+=map[i][j-k-1];
						map[i][j-k-1]=0;
					}
					//cout<<"$"<<set<<" "<<cnt<<endl;
					move=true;
				}
				cnt=1;
				set=map[i][j];
			}
			else cnt++;
		}
		if(cnt>=3&&set!=0){
			for(int k=0;k<cnt;k++){
				ans+=map[i][4-k];
				map[i][4-k]=0;
			}
			//cout<<"$"<<set<<" "<<cnt<<endl;
			move=true;
		}
	}
	for(int k=0;k<h;k++){
	for(int j=0;j<5;j++){
		for(int i=h-1;i>0;i--){
			if(map[i-1][j]==0){
				int tmp=map[i][j];
				map[i][j]=0;
				map[i-1][j]=tmp;
			}
		}
	}
	}
	if(move)DFS();
}
int main(){
	while(true){
	cin>>h;
	if(h==0)break;
	for(int i=0;i<h;i++){
		for(int j=0;j<5;j++){
			cin>>map[h-i-1][j];
		}
	}
	ans=0;
	DFS();
	cout<<ans<<endl;
	}
	return 0;
}