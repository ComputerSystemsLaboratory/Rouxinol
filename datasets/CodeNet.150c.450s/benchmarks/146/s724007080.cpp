#include<iostream>
#include<string>
#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;
int main(void){
	int n;
	double x1,x2,x3,x4,y1,y2,y3,y4;
	cin>>n;
	for(int i=0;i<n;i++){
	    cin>>x1>>y1>>x2>>y2>>x3>>y3>>x4>>y4;


    double a,b;
    a=(y2-y1)/(x2-x1);
    b=(y4-y3)/(x4-x3);
    (a==b)? cout<<"YES"<<endl : cout<<"NO"<<endl;
	}
	return 0;
}