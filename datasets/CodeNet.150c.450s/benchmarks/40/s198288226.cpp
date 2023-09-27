#include <iostream>
#include <vector>
#include <stdio.h>
using namespace std;
const int N=0;
const int E=1;
const int S=2;
const int W=3;
const int Z=4;
int rs[5][4]={{0,1,5,4},{0,3,5,2},{0,4,5,1},{0,2,5,3},{3,1,2,4}};
struct xai{
int ds[6];

void round(int n){
	int t=ds[rs[n][0]];
	for(int i=0;i<3;i++){
		ds[rs[n][i]]=ds[rs[n][i+1]];
	}
	ds[rs[n][3]]=t;
}
void roundZ(){
	int cs[4];
	std::vector<int> vec;
	for(int i=0;i<4;i++){
		vec.push_back(ds[rs[Z][i]]);
	}
	for(int i=0;i<4;i++){
		round(Z);
		std::vector<int> vec2;
		for(int i=0;i<4;i++){
			vec2.push_back(ds[rs[Z][i]]);
		}
		if(vec<vec2)vec=vec2;
	}
	for(int i=0;i<4;i++){
		ds[rs[Z][i]]=vec[i];
	}
}
};

int main() {
// your code goes here
xai e;
for(int i=0;i<6;i++){
	scanf("%d",&e.ds[i]);
}
char com[101];
scanf("%s",com);
for(int i=0;com[i]!='\0';i++){
	if(com[i]=='N')e.round(N);
	if(com[i]=='E')e.round(E);
	if(com[i]=='S')e.round(S);
	if(com[i]=='W')e.round(W);
}
printf("%d\n",e.ds[0]);
return 0;
}
