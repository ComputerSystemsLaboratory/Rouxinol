#include<iostream>
#include<string>
#include<cstdio>
#include<cmath>
#include<algorithm>
using namespace std;
double check(double xa,double ya,double xb,double yb,double xc,double yc);
int main(void){
    double qxa,qya,qxb,qyb,qxc,qyc,qxp,qyp;
	while(cin>>qxa){

	    cin>>qya>>qxb>>qyb>>qxc>>qyc>>qxp>>qyp;
	    double abc,abp,bcp,cap;
	    abc=check(qxa,qya,qxb,qyb,qxc,qyc);
	    abp=check(qxa,qya,qxb,qyb,qxp,qyp);
        bcp=check(qxb,qyb,qxc,qyc,qxp,qyp);
        cap=check(qxc,qyc,qxa,qya,qxp,qyp);

        double var=abc-(abp+bcp+cap);
        if(var<=0.01&&var>=-0.01)var=0.0;
        if(var==0.0)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;


	}
	return 0;
}


double check(double xa,double ya,double xb,double yb,double xc,double yc){

    double ab,bc,ca;
    double S,s;
    ab=sqrt((xa-xb)*(xa-xb)+(ya-yb)*(ya-yb));
    bc=sqrt((xb-xc)*(xb-xc)+(yb-yc)*(yb-yc));
    ca=sqrt((xc-xa)*(xc-xa)+(yc-ya)*(yc-ya));
    s=0.5*(ab+bc+ca);
    S=sqrt(s*(s-ab)*(s-bc)*(s-ca));
    //cout<<S<<endl;
    return S;


}