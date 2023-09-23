#include <algorithm>
#include <vector>
#include <math.h>
#include <stdio.h>
#include <cctype>
#include <iostream>
#include <set>
#include <string>
#include <queue>
#include <map>
using namespace std;
int size(string x){
	string::size_type size=x.size();
	return size;
}
#define fu(l,k) for(int i=l;i<k;i++)
#define fd(l,k) for(int i=l;i>k;i--)
#define fi first
#define se second
typedef  vector<string> vs;
typedef  vector<int> vi;
double pi(){
	return M_PI;
}
typedef set<int> set_i;
typedef set<string> set_s;
int main(){
	int a,b,c,d,e,f,a1;
	while(cin>>a>>b>>c>>d>>e>>f){
		double det = a*e - b * d;
        double x = 1 / det * (c * e - b * f);
        double y = 1 / det * (f * a - c * d);
		if(x==-0.0) x=0.0;
		if(y==-0.0) y=0.0;
		printf("%.3lf %.3lf\n",x,y);
	}
}