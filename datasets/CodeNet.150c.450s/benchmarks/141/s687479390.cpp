#include<iostream>
#include<cmath>
#include<algorithm>
using namespace std;

double pdot(pair<double,double> a,pair<double,double> b){
	return a.first*b.first + a.second*b.second;
}

int main(){
	double a1,a2,b1,b2,c1,c2,p1,p2;
	while(cin>>a1>>a2>>b1>>b2>>c1>>c2>>p1>>p2){
	pair<double,double> v0 = make_pair(c1-a1,c2-a2);
	pair<double,double> v1 = make_pair(b1-a1,b2-a2);
       	pair<double,double> v2 = make_pair(p1-a1,p2-a2);
	double dot00 = pdot(v0,v0), dot01 = pdot(v0,v1), dot02 = pdot(v0,v2), dot11 = pdot(v1,v1);
	double dot12 = pdot(v1,v2);
	double id = 1.0 / (dot00 * dot11 - dot01 * dot01);
	double u = (dot11 * dot02 - dot01 * dot12) * id;
	double v = (dot00 * dot12 - dot01 * dot02) * id;
	//cout<<u<<":"<<v<<endl;
	if(u>=0 && v>=0 && u+v<1)cout<<"YES"<<endl;
	else cout<<"NO"<<endl;
	}
	return 0;
}