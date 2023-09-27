#include<iostream>
using namespace std;

class dice{	
public:
	int d[7];
	int set();
	int E();
	int W();
	int N();
	int S();
	int R();//?°´???????????¢
	int C(int *,int *,int *,int *);//??\??????????????????
};
int dice::set(){
	for(int i=1;i<=6;i++){
		cin>>d[i];
	}
	return 0;
}
int dice::C(int *w,int *x,int *y,int *z){
	int a[4];
	a[0]=*w;
	a[1]=*x;
	a[2]=*y;
	a[3]=*z;
	*w=a[3];
	*x=a[0];
	*y=a[1];
	*z=a[2];
	return 0;
}
int dice::E(){
	C(&d[1],&d[3],&d[6],&d[4]);
	return 0;
}
int dice::W(){
	C(&d[1],&d[4],&d[6],&d[3]);
	return 0;
}
int dice::N(){
	C(&d[1],&d[5],&d[6],&d[2]);
	return 0;
}
int dice::S(){
	C(&d[1],&d[2],&d[6],&d[5]);
	return 0;
}
int dice::R(){
	C(&d[2],&d[4],&d[5],&d[3]);
	return 0;
}
int main(){
	dice D;
	D.set();
	char m[110];
	cin>>m;
	for(int j=0;;j++){
		if(m[j]=='E'){
			D.E();
			continue;
		}
		if(m[j]=='W'){
			D.W();
			continue;
		}
		if(m[j]=='N'){
			D.N();
			continue;
		}
		if(m[j]=='S'){
			D.S();
			continue;
		}
		break;
	}
	cout<<D.d[1]<<endl;
	return 0;
}