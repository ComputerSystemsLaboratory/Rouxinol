#include<iostream>
#include<cstdio>
#include<string>
using namespace std;
int h,w;
string ss[100];
bool x[100][100];
int ans=0;

void f(int k,int l){
	if(k!=0&&x[k-1][l]&&ss[k][l]==ss[k-1][l]){
		x[k-1][l]=false;
		f(k-1,l);
	}
	if(l!=0&&x[k][l-1]&&ss[k][l]==ss[k][l-1]){
		x[k][l-1]=false;
		f(k,l-1);
	}
	if(k!=h-1&&x[k+1][l]&&ss[k][l]==ss[k+1][l]){
		x[k+1][l]=false;
		f(k+1,l);
	}
	if(l!=w-1&&x[k][l+1]&&ss[k][l]==ss[k][l+1]){
		x[k][l+1]=false;
		f(k,l+1);
	}
}
int main()
{
	while(true){
		for(int i=0;i<100;i++)for(int j=0;j<100;j++)x[i][j]=true;
		scanf("%d%d",&h,&w);
		if(h==0&&w==0)return 0;
		for(int i=0;i<h;i++)cin >> ss[i];

		ans=0;
		for(int i=0;i<h;i++){
			for(int j=0;j<w;j++){
				if(x[i][j]){
					ans++;
					f(i,j);
				}
			}
		}
		cout << ans << "\n";
	}
}