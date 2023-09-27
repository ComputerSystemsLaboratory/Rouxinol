#include <iostream>
#include <vector>
#include <string>
#include <set>
#include <algorithm>
using namespace std;
int group[55][55];
int parent(int n){
	int i=n/55,j=n%55;
	if(group[i][j]==-1)	return -1;
	return group[i][j]=(group[i][j]==n?group[i][j]:parent(group[i][j]));
}
void merge(int s,int t){
	int si=s/55,sj=s%55;
	s=parent(group[si][sj]);
	int ti=t/55,tj=t%55;
	t=parent(group[ti][tj]);
	group[t/55][t%55]=s;
}
bool isInside(int i,int j,int w,int h){
	if(i<0||h<=i)	return false;
	if(j<0||w<=j)	return false;
	return true;
}
const int dx[]={1,0,-1};
const int dy[]={1,0,-1};
int main(){
	while(true){
		int w,h;	cin>>w>>h;
		if(w==0)	break;
		for(int i=0;i<h;i++)	for(int j=0;j<w;j++)	group[i][j]=-1;
		for(int i=0;i<h;i++)	for(int j=0;j<w;j++){
			int c;	cin>>c;
			if(c==1)	group[i][j]=55*i+j;
		}
		for(int i=0;i<h;i++)	for(int j=0;j<w;j++){
			if(group[i][j]>=0){
				for(int x=0;x<3;x++)	for(int y=0;y<3;y++){
					int ni=i+dy[y],nj=j+dx[x];
					if(!isInside(ni,nj,w,h))	continue;
					if(group[ni][nj]>=0)	merge(55*i+j,55*ni+nj);
				}
			}
		}
		set<int> ret;
		for(int i=0;i<h;i++)	for(int j=0;j<w;j++)	ret.insert(parent(group[i][j]));
		ret.erase(-1);
		cout<<ret.size()<<endl;
	}
	return 0;
}