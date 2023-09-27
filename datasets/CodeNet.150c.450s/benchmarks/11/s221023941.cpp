#include<iostream>
#include<cstdio>
#include<vector>
#include<algorithm>
using namespace std;

int cctoi(char x){//cardのcharをintに変換
	int a;
	if(x=='S')a=0;
	else if(x=='H')a=1;
	else if(x=='C')a=2;
	else if(x=='D') a=3;
	return a;
}
char citoc(int a){//cardのintをcharに変換
	char x;
	if(a==0)x='S';
	else if(a==1)x='H';
	else if(a==2)x='C';
	else if(a==3)x='D';
	return x;
}

int main(){
int n;cin>>n;
int card[4][14]={0};card[0][0]=card[1][0]=card[2][0]=card[3][0]=1;
int a;char x;

	for(int i=0;i<n;i++){
			cin>>x>>a;
			card[cctoi(x)][a]=1;
}
for(int j=0;j<4;j++){
	for(int i=1;i<14;i++){
	if(card[j][i]==0)cout<<citoc(j)<<" "<<i<<endl;
	}
}


 return 0;
}