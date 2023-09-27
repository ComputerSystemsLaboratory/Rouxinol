#include <iostream>
#include <algorithm>
#include <cctype>
#include <cstdio>
#include <math.h>
using namespace std;

int main() {
	
	int n;
	double x1,y1,x2,y2,x3,y3,x4,y4,m1,m2;
	
	cin>>n;
	
	for(int i=0;i<n;i++){
		int p=0;
		cin>>x1>>y1>>x2>>y2>>x3>>y3>>x4>>y4;
		if(x1==x2&&x3==x4){p=1;}
		else if(x1==x2||x3==x4){}
		else if((y2-y1)/(x2-x1)==(y4-y3)/(x4-x3))p=1;
		if(p==1)cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
	
	return 0;
}