#include <iostream>
#include <utility>
#include <queue>
#include <algorithm>
using namespace std;

bool ary[1010][1010];
bool sag[1010][1010];
int goalx[11],goaly[11];
int main(){
	queue<pair<pair<int,int>,int> > qu;
	pair<pair<int,int>,int> pa;
	int H,W,N,YY,XX,TT,keka;
	char ch;
	keka=0;
	cin>>H>>W>>N;
	for(int i=0;i<H;i++){
		for(int j=0;j<W;j++){
			cin>>ch;
			if(ch>='1'&&ch<='9'){
				goaly[ch-'0']=i;
				goalx[ch-'0']=j;
			}
			if(ch=='S'){
				goaly[0]=i;
				goalx[0]=j;
			}
			ary[i][j]=(ch=='X');
		}
	}

	for(int sta=0;sta<N;sta++){
		for(int i=0;i<H;i++){
			for(int j=0;j<W;j++){
				sag[i][j]=false;
			}
		}
		qu.push(make_pair(make_pair(goaly[sta],goalx[sta]),0));
		while(!qu.empty()){
			pa=qu.front();
			qu.pop();
			YY=pa.first.first;
			XX=pa.first.second;
			TT=pa.second;
			if(YY==goaly[sta+1]&&XX==goalx[sta+1]){
				//cout<<sta<<" "<<TT<<endl;//
				keka+=TT;
				while(!qu.empty())qu.pop();
				break;
			}

			if(YY>0&&!ary[YY-1][XX]&&!sag[YY-1][XX]){
				qu.push(make_pair(make_pair(YY-1,XX),TT+1));
				sag[YY-1][XX]=true;
			}
			if(YY<H-1&&!ary[YY+1][XX]&&!sag[YY+1][XX]){
				qu.push(make_pair(make_pair(YY+1,XX),TT+1));
				sag[YY+1][XX]=true;
			}
			if(XX>0&&!ary[YY][XX-1]&&!sag[YY][XX-1]){
				qu.push(make_pair(make_pair(YY,XX-1),TT+1));
				sag[YY][XX-1]=true;
			}
			if(XX<W-1&&!ary[YY][XX+1]&&!sag[YY][XX+1]){
				qu.push(make_pair(make_pair(YY,XX+1),TT+1));
				sag[YY][XX+1]=true;
			}
		}
	}
	cout<<keka<<endl;
	return 0;
}