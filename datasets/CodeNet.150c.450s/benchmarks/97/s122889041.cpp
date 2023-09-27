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
int n,a,b,x,y,xmax,ymax,ymin,xmin;
while(cin>>n && n){
xmax=0,ymax=0,ymin=0,xmin=0;
vector<pair<int,int> > v;
v.push_back(make_pair(0,0));
for(int i=0;i<n-1;i++){
cin>>a>>b;
x=v[a].first;
y=v[a].second;
if(b==0) x--;
if(b==1) y--;
if(b==2) x++;
if(b==3) y++;
v.push_back(make_pair(x,y));
if(x>xmax) xmax=x;
if(y>ymax) ymax=y;
if(x<xmin) xmin=x;
if(y<ymin) ymin=y;
}

cout<<xmax-xmin+1<<" "<<ymax-ymin+1<<endl;


}


	return 0;
}