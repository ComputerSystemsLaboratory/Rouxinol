#include <iostream>
#include <algorithm>
#include <vector>
#include <cstdio>
#include <string>
#include <set>
#include <queue>
#include <stack>
#include <cmath>
#include <functional>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<long long > vll;
typedef vector< vi > vvi;
int main() {
	float a,b,c,d,e,f,x,y;
	while(true){
		cin>>a>>b>>c>>d>>e>>f;
		if (cin.eof())break;
		x=c*e-b*f;
		y=a*f-c*d;
		if(x!=0){
		x/=a*e-d*b;
	}
		if(y!=0){
		y/=a*e-d*b;
	}
		printf("%.3f %.3f\n",x,y);
	}
}