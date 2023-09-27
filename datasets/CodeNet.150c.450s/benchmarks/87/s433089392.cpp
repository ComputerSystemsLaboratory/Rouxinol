//今日の成果*AOJ0027*AOJ0028


#include<iostream>
#include<string>
#include<vector>
#include<cstdio>
#include<sstream>
#include<algorithm>
#include<cmath>
#include<map>
using namespace std;
int stoi(string x){stringstream ss;ss<<x;int tmp;ss>>tmp;return tmp;}
string itos(int x){stringstream ss;ss<<x;return ss.str();}
int main(){
	
	int h,ans=0;
	while(true){
	cin>>h;
	if(h==0)break;
	ans=0;
	int ta[200][5]={{0},{0}};
	for(int i=0;i<h;i++)for(int j=0;j<5;j++)cin>>ta[i][j];
	//盤面の存在しないところは0
	while(true){

	bool f=1;
	for(int i=0;i<h;i++){
	int cnt=0,fi=-1;
		for(int j=0;j<3;j++){
			if(ta[i][j]==ta[i][j+1]&&ta[i][j]==ta[i][j+2]&&ta[i][j]!=0){
			cnt++;
			if(fi==-1)fi=j;
			}
		}//endfor
		if(cnt!=0)ans+=ta[i][fi]*(2+cnt),f=0;
		if(cnt!=0)for(int j=0;j<2+cnt;j++)ta[i][fi+j]=0;
	}//endfor
	if(f)break;
	//落とす処理
	for(int i=h-2;i>=0;i--){
		for(int j=0;j<5;j++){
			int ti=i;
			while(true){
			if(ti==h-1||ta[ti+1][j]!=0)break;
			ta[ti+1][j]=ta[ti][j];
			ta[ti][j]=0;
			ti++;
			}//endwhile
		}//endfor
	}//endfor
	//for(int i=0;i<h;i++)printf("%d%d%d%d%d\n",ta[i][0],ta[i][1],ta[i][2],ta[i][3],ta[i][4]);
	//printf("\n");
	}//endwhile
	cout<<ans<<endl;
	}//endwhile
	return 0;
}