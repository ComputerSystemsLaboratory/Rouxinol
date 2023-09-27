#define	_USE_MATH_DEFINES
#include <iostream>
#include <algorithm>
#include <functional>
#include <vector>
#include <cstdio>
#include <string>
#include <cmath>
#include <cfloat>
#include <map>
#include <queue>
#include <stack>
#include <list>
using namespace std;

int main(){

	int n;
	cin>>n;
	float x1,y1,x2,y2,x3,y3,x4,y4;
	while(n>0){
		
		float a=999999,b=999999;
	cin>>x1>>y1>>x2>>y2>>x3>>y3>>x4>>y4;

		if(x2!=x1){
			a=(y2-y1)/(x2-x1);
		}
		if(x3!=x4){
			b=(y4-y3)/(x4-x3);
		}
		
		if(a==b)
			cout<<"YES"<<endl;
		else
			cout<<"NO"<<endl;
		
		n--;
	}
	
	
}