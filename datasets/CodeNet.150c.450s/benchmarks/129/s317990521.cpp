#include<iostream>
#include<cstdio>
#include<vector>
#include<algorithm>
#include<string>
#include<vector>
#include<cctype>
using namespace std;

int sum(int a[],int n){
	int s;
	for(int i=0;i<n;i++)s+=a[i];
	return s;
}

int main(){
int r,c;
int h[101][101];
vector<int> ts,ys;//縦の合計豊子の合計

cin>>r>>c;int a=0,b=0;
	for(int i=0;i<r;i++){
		for(int j=0;j<c;j++){
			cin>>h[i][j];
		}
	}
	
	for(int i=0;i<r;i++){
		int y=0;
		for(int j=0;j<c;j++){
		y+=h[i][j];
		}
		a+=y;
		ys.push_back(y);
	}
	for(int i=0;i<c;i++){
	int t=0;
		for(int j=0;j<r;j++){
			t+=h[j][i];
		}
		b+=t;
		ts.push_back(t);
	}
	for(int i=0;i<r;i++)h[i][c]=ys[i];
	for(int i=0;i<c;i++)h[r][i]=ts[i];
	
	h[r][c]=(a+b)/2;
	
	for(int i=0;i<=r;i++){
		for(int j=0;j<=c;j++){
			if(i==r&&j==c){cout<<h[r][c]<<endl;break;}
			else if(j==c){cout<<h[i][j]<<endl;}
			else cout<<h[i][j]<<" ";
		}
}

return 0;
}