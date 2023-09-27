#include <iostream>
using namespace std;

int uni[100000];

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

int n,m;
cin>>n>>m;
for(int y=0;y<n;y++){
	uni[y]=-1;
}

for(int r=0;r<m;r++){
int s,g;
cin>>s>>g;
if(ren(s,g)){
	s=oya(s);
	uni[s]=g;
	}
}
int q;
cin>>q;
for(int rr=0;rr<q;rr++){
	int s,g;
	cin>>s>>g;
	if(ren(s,g)==true){
		cout<<"no"<<endl;
	}
	else{
		cout<<"yes"<<endl;
	}
}
	return 0;
}