#include<string>
#include<vector>
#include<iostream>
#include<algorithm>
#include<cstdio>
#include<cstdlib>
#include<sstream>
#include<functional>
#include<map>
#include<set>
#include<cmath>

#define REP(i,s,e) for(int i=int(s);i<int(e);i++)
#define rep(i,n) for(int i=0;i<int(n);i++)

#define EPS 1e-6

using namespace std;

bool intriangle(double x1,double y1,double x2,double y2,double x3,double y3,double xp,double yp){

double a=y2-y1;
double b=x1-x2;
double c=y1*(x2-x1)-x1*(y2-y1);

if((a*xp+b*yp+c)*(a*(x1+x2+x3)+b*(y1+y2+y3)+3*c)>0)
return true;
else
return false;
}

int main(){

double x1,y1,x2,y2,x3,y3,xp,yp;

while(true){

cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> xp >> yp;

if(cin.fail()) break;

if(intriangle(x1,y1,x2,y2,x3,y3,xp,yp) && intriangle(x2,y2,x3,y3,x1,y1,xp,yp) && intriangle(x3,y3,x1,y1,x2,y2,xp,yp))
cout << "YES" << endl;
else cout << "NO" << endl;

}

	return 0;
}