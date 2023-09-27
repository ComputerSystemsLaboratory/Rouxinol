#include <iostream>
using namespace std;

class dice{
public:
	int d[7];
	int setd();
	int M(int*,int*,int*,int*);
};
int dice::setd(){
	for(int i=1;i<=6;i++){
		cin>>d[i];
	}
	return 0;
}
int dice::M(int *A,int *B,int *C,int *D){
	int s,t;
	s=*B;
	*B=*A;
	t=*C;
	*C=s;
	s=*D;
	*D=t;
	*A=s;
	return 0;
}
int main(void){
	dice a;
	a.setd();
	char c[110];
	cin>>c;
	for(int j=0;;j++){
		if(c[j]=='E'){
			a.M(&a.d[1],&a.d[3],&a.d[6],&a.d[4]);
			continue;
		}
		if(c[j]=='W'){
			a.M(&a.d[1],&a.d[4],&a.d[6],&a.d[3]);
			continue;
		}
		if(c[j]=='N'){
			a.M(&a.d[1],&a.d[5],&a.d[6],&a.d[2]);
			continue;
		}
		if(c[j]=='S'){
			a.M(&a.d[1],&a.d[2],&a.d[6],&a.d[5]);
			continue;
		}
		break;
	}
	cout<<a.d[1]<<endl;
	return 0;
}