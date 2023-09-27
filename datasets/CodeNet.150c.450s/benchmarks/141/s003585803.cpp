#include<iostream>
#include<complex>

#define EPS 1e-3

using namespace std;

typedef complex<double> P;

double cross(P v1,P v2){
	return v1.real()*v2.imag()-v1.imag()*v2.real();
}

bool che(P v1,P v2,P v3,P v){
	if(cross(v2-v1,v-v1)<-EPS&&cross(v3-v2,v-v2)<-EPS&&cross(v1-v3,v-v3)<-EPS)return true;
	else if(cross(v2-v1,v-v1)>EPS&&cross(v3-v2,v-v2)>EPS&&cross(v1-v3,v-v3)>EPS)return true;
	return false;
}

int main(){
	double x1,y1,x2,y2,x3,y3,xP,yP;
	while(cin>>x1>>y1>>x2>>y2>>x3>>y3>>xP>>yP){
		P v=P(xP,yP);
		P v1=P(x1,y1);
		P v2=P(x2,y2);
		P v3=P(x3,y3);
		
		if(che(v1,v2,v3,v))cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
		
		
	}
}