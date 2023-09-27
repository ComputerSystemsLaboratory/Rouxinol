#include <bits/stdc++.h>
using namespace std;

struct square{
	int ind;
	int x,y;
	square(int ind,int x,int y):ind(ind),x(x),y(y){}
};

int dx[4]={-1,0,1,0};
int dy[4]={0,-1,0,1};

int main(void){
int n;
int tn,td;
int i,j,k;
int ans=0;
vector<square> blocks;

while(true){
cin>>n;
if(n==0)return 0;
blocks=vector<square>(1,square(0,0,0));
for(i=1;i<n;i++){
	cin>>tn>>td;
	blocks.push_back(square(i,blocks[tn].x+dx[td],blocks[tn].y+dy[td]));
}
int maxx=0,minx=0,maxy=0,miny=0;
for(i=0;i<n;i++){
	maxx=max(maxx,blocks[i].x);
	minx=min(minx,blocks[i].x);
	maxy=max(maxy,blocks[i].y);
	miny=min(miny,blocks[i].y);
}

cout<<maxx-minx+1<<" "<<maxy-miny+1<<endl;
}
return 0;
}

