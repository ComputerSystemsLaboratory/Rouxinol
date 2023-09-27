#include<cstdio>
#include<cmath>
#include<iostream>
#include<algorithm>
using namespace std;
int main(){
	int N;
	cin>>N;
	for(int i=0;i<N;i++){
		double x1,y1,x2,y2,x3,y3,x4,y4;
		cin>>x1>>y1>>x2>>y2>>x3>>y3>>x4>>y4;
		if((x1==x2&&y1==y2)||(x3==x4&&y3==y4))cout<<"NO"<<endl;
		else if(fabs(x2-x1)<0.00000000001&&fabs(x4-x3)<0.00000000001)cout<<"YES"<<endl;
		else if(fabs((y2-y1)/(x2-x1)-(y4-y3)/(x4-x3))<0.0000000000001)cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
	return 0;
}
	