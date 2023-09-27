#define	_USE_MATH_DEFINES
#include <iostream>
#include <algorithm>
#include <functional>
#include <vector>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <cfloat>
#include <map>
#include <queue>
#include <stack>
#include <list>
#include <string>
#include <set>
using namespace std;
int gcd(int x,int y){
	
	if(y==0)
		return x;
	else
		return gcd(y,x%y);
	
	
}
int main(){
	
	int x,y;
	cin>>x>>y;
	cout<<gcd(x,y)<<endl;
	
	
}