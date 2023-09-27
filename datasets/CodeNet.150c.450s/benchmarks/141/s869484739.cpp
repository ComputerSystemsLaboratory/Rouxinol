#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <algorithm>
#include <cstdlib>
#include <ctime>
#include <stdio.h>

#define MAX 1000000

using namespace std;

int main()
{
	double x1,y1,x2,y2,x3,y3,xp,yp,z1,z2,z3;
	int n;

	while(cin>>x1>>y1>>x2>>y2>>x3>>y3>>xp>>yp)
	{

		z1=(x2-x1)*(yp-y1)-(y2-y1)*(xp-x1);
		z2=(x3-x2)*(yp-y2)-(y3-y2)*(xp-x2);
		z3=(x1-x3)*(yp-y3)-(y1-y3)*(xp-x3);

		
		if((z1>0&&z2>0&&z3>0)||(z1<0&&z2<0&&z3<0)) cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}

	return 0;
}