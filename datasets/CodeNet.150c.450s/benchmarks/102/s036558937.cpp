#include<iostream>
#include<string>
using namespace std;
int x[21][21],ans=0,w,h;
string d[21];
void f(int i,int j){
	ans++;
	x[i][j]=1;
	if(i+1<h){
		if(x[i+1][j]==0 && d[i+1][j]=='.')
		f(i+1,j);
	}
	if(i-1>=0){
		if(x[i-1][j]==0 && d[i-1][j]=='.')
		f(i-1,j);
	}
	if(j+1<w){
		if(x[i][j+1]==0 && d[i][j+1]=='.')
		f(i,j+1);
	}
	if(j-1>=0){
		if(x[i][j-1]==0 && d[i][j-1]=='.')
		f(i,j-1);
	}
}
int main(){
	while(cin>>w>>h,w){
		int a,b;
		ans=0;
		for(int i=0;i<21;i++){
			for(int j=0;j<21;j++){
				x[i][j]=0;
			}
		}
		for(int i=0;i<h;i++){
			cin>>d[i];
			for(int j=0;j<w;j++){
				if(d[i][j]=='@'){
					a=j;
					b=i;
				}
			}
		}
		f(b,a);
		cout<<ans<<endl;
	}
	return 0;
}