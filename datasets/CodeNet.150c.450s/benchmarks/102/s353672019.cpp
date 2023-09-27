#include <iostream>
#include <algorithm>
#include <stdlib.h>
#include <string>
#include <queue>
#include <map>
#include <stack>
using namespace std;

int dx[4]={1,-1,0,0};
int dy[4]={0,0,1,-1};


int main() {
int yoko,tate,px,py;
while(cin>>yoko>>tate &&yoko){

	int m[25][25];

string st;
//cin>>yoko>>tate;
for(int i=1;i<tate+1;i++){
cin>>st;
for(int j=1;j<yoko+1;j++){
if(st[j-1]=='#') m[i][j]=-1;
else if(st[j-1]=='.') m[i][j]=0;
else if(st[j-1]=='@'){
 m[i][j]=1;
px=i;
py=j;
}
}
}
int ans=1;
stack<pair<int,int> > s;
s.push(make_pair(px,py));
//cout<<"pxpy "<<px<<" "<<py<<endl;
while(s.empty()==false){
px=s.top().first;
py=s.top().second;
s.pop();

for(int i=0;i<4;i++){
//cout<<px+dx[i]<<" "<<py+dy[i]<<endl;
	if(0<px+dx[i] && px+dx[i]<tate+1 && py+dy[i]>0 && py+dy[i]<yoko+1){
	
		if(m[px+dx[i]][py+dy[i]]==0){
			m[px+dx[i]][py+dy[i]]=1;
			s.push(make_pair(px+dx[i],py+dy[i]));
			ans++;
//cout<<px+dx[i]<<" "<<py+dy[i]<<" "<<ans<<endl;
		}

	}}
}

cout<<ans<<endl;

}



	return 0;
}