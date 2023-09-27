#include<bits/stdc++.h>
using namespace std;
/*
if(x=='N')
	{m1=d2;m2=d6;m6=d5;m5=d1;
	}
if(x=='S')
	{m1=d5;m5=d6;m6=d2;m2=d1;
	}
if(x=='W')
	{m3=d6;m6=d4;m4=d1;m1=d3;
	}
if(x=='E')
	{m6=d3;m3=d1;m1=d4;m4=d6;
	}
*/
int main(){
//DICE input
int d1,d2,d3,d4,d5,d6;
int x1,x2,x3,x4,x5,x6;
cin>>x1>>x2>>x3>>x4>>x5>>x6;
d1=x1,d2=x2,d3=x3,d4=x4,d5=x5,d6=x6;
int m1,m2,m3,m4,m5,m6;
//END DICE input
int a,x,y;
cin>>a;
for(int i=0;i<a;i++)
{
//DICE replace original
d1=x1;d2=x2;d3=x3;d4=x4;d5=x5;d6=x6;
//END DICE replace
//memory replace
m1=d1;m2=d2;m3=d3;m4=d4;m5=d5;m6=d6;
//
cin>>x>>y;

for(int i3=0; i3<6 ; i3++)
	{
	for(int i2=0;i2<4;i2++)
		{
		m1=d1;m2=d2;m3=d3;m4=d4;m5=d5;m6=d6;
		m1=d2;m2=d6;m6=d5;m5=d1;
		d1=m1;d2=m2;d3=m3;d4=m4;d5=m5;d6=m6;
		if(d1==x && d2==y) {cout<<d3<<endl; break;}
		}
	if(d1==x && d2==y) break;
	if(i3<3)
	{m1=d1;m2=d2;m3=d3;m4=d4;m5=d5;m6=d6;
	m3=d6;m6=d4;m4=d1;m1=d3;
	d1=m1;d2=m2;d3=m3;d4=m4;d5=m5;d6=m6;}
	if(i3==3)
	{m1=d1;m2=d2;m3=d3;m4=d4;m5=d5;m6=d6;
	m1=d2;m2=d6;m6=d5;m5=d1;
	d1=m1;d2=m2;d3=m3;d4=m4;d5=m5;d6=m6;
	m1=d1;m2=d2;m3=d3;m4=d4;m5=d5;m6=d6;
	m3=d6;m6=d4;m4=d1;m1=d3;
	d1=m1;d2=m2;d3=m3;d4=m4;d5=m5;d6=m6;}
	if(i3==4)
	{m1=d1;m2=d2;m3=d3;m4=d4;m5=d5;m6=d6;
	m3=d6;m6=d4;m4=d1;m1=d3;
	d1=m1;d2=m2;d3=m3;d4=m4;d5=m5;d6=m6;
	m1=d1;m2=d2;m3=d3;m4=d4;m5=d5;m6=d6;
	m3=d6;m6=d4;m4=d1;m1=d3;
	d1=m1;d2=m2;d3=m3;d4=m4;d5=m5;d6=m6;}
	}
}

return 0;
}
