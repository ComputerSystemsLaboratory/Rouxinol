#include<bits/stdc++.h>
using namespace std;
int m[51][51];
void del(int a,int b){
	m[a][b]=0;
	if(m[a-1][b]==1)del(a-1,b);
	if(m[a][b-1]==1)del(a,b-1);
	if(m[a+1][b]==1)del(a+1,b);
	if(m[a][b+1]==1)del(a,b+1);
	if(m[a-1][b-1]==1)del(a-1,b-1);
	if(m[a-1][b+1]==1)del(a-1,b+1);
	if(m[a+1][b-1]==1)del(a+1,b-1);
	if(m[a+1][b+1]==1)del(a+1,b+1);
}
int main(){
	int a,b,i,j,w,q;
	while(cin>>a>>b,a!=0&&b!=0){
		int c=0;
		for(i=0;i<b;i++)for(j=0;j<a;j++)cin>>m[i][j];
        for(i=0;i<b;i++)for(j=0;j<a;j++)if(m[i][j]==1){del(i,j);c++;}
        	cout<<c<<endl;
    }
}