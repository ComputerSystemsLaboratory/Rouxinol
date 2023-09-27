#include <iostream>
#include <algorithm>
#include <cassert>
#include <cctype>
#include <cstdio>
#include <math.h>
#include <map>
#include <queue>
#include <string>
#include <vector>
using namespace std;

int a,b,c,d,e,f,g,h;

int main(){
	cin>>a>>b>>c>>d>>e>>f>>g>>h;
	if(a+b+c+d>e+f+g+h)cout<<a+b+c+d<<endl;
	else cout<<e+f+g+h<<endl;
}