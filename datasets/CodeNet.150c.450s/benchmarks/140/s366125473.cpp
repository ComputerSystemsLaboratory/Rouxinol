#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>
#include<stdio.h>
#include <map>
using namespace std;

int uni[100100];

int oya(int a){
if (uni[a]<0){
	return a;
}
else{
	uni[a]=oya(uni[a]);
	return oya(uni[a]);
}
}

bool ren(int a,int b){
	a=oya(a);
	b=oya(b);
	if(a==b){
	return	false;
	}
	else{
		
	return true;	
	}
}


int main() {
	int co=0;
	
vector <pair<int, int> > be;
int e,v;
cin>>v>>e;
for(int y=0;y<v;y++){
	uni[y]=-1;
}
for(int u=0;u<e;u++){
	int z,x,c;
	cin>>z>>x>>c;
	be.push_back(pair<int, int>(c,z*100100+x));
}
sort(be.begin(), be.end());

for(int y=0;y<e;y++){
	int z,x,c;
	c=be[y].first;
	z=(be[y].second)/100100;
	x=(be[y].second)%100100;
	if(ren(z,x)==true){
		co=co+c;
		uni[oya(z)]=x;
	}
}
cout<<co<<endl;


	return 0;
}