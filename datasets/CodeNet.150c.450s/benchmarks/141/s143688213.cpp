#include<algorithm>
#include<iostream>
#include<string>
#include<cstdio>
#include<cmath>
using namespace std;

#define rep(i,n) for(int i=0; i<n; i++)
#define swap(a,b) tmp=ver[b], ver[b]=ver[a], ver[a]=tmp;
int main(){
	double x1, y1, x2, y2, x3, y3, xp, yp;
	double p, q, r;
	while(cin>>x1>>y1>>x2>>y2>>x3>>y3>>xp>>yp){
		p=(x2-x1)*(yp-y1)-(y2-y1)*(xp-x1);
		q=(x3-x2)*(yp-y2)-(y3-y2)*(xp-x2);
		r=(x1-x3)*(yp-y3)-(y1-y3)*(xp-x3);
		if(p*q>0 && q*r>0 && r*p>0){
			cout << "YES" << endl;
		}
		else {
			cout << "NO" << endl;
		}
	}
	return 0;
}