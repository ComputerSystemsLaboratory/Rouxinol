#include<iostream>
#include<map>
#include<cstdio>
#include<cstring>
#include<string>
using namespace std;
bool set[21][21];
int tx[]={1,0,-1,0},ty[]={0,1,0,-1}; //NESWの順
int x,y; //座標
void MOVE(char s,int a);
int main(){
		int n,a,b;
	while(1){
	for(int i=0;i<=20;i++)for(int j=0;j<=20;j++)set[i][j]=false;
	cin >> n;
	if(n==0)break;
	for(int i=0;i<n;i++){
		cin >> a >> b;
		set[a][b]=true;
	}
	cin >> n;
	x=y=10;
	char s;
	for(int i=0;i<n;i++){
		cin >> s >> a;
		MOVE(s,a);
	}
	int flg=0;
	for(int i=0;i<20;i++){
		for(int j=0;j<20;j++){
			if(set[i][j]==true)flg=1;
		}
	}
	if(flg==0)cout << "Yes" << endl;
	else cout << "No" << endl;
}
}
void MOVE(char s,int a){
	int k;
	if(s=='N')k=0;
	else if(s=='E')k=1;
	else if(s=='S')k=2;
	else k=3;

	for(int i=0;i<a;i++){
		x+=ty[k];
		y+=tx[k];
		set[x][y]=false;
	}
	return;
}