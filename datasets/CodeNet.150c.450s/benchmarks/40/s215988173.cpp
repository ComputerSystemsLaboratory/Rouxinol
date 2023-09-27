#include<bits/stdc++.h>
using namespace std;

int main(){
//DICE input
int d1,d2,d3,d4,d5,d6;
cin>>d1>>d2>>d3>>d4>>d5>>d6;
int m1=d1,m2=d2,m3=d3,m4=d4,m5=d5,m6=d6;
//END DICE input
char x;
while(1)
{

//memory replace
m1=d1;m2=d2;m3=d3;m4=d4;m5=d5;m6=d6;
//
if(cin>>x) 1; else break;
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
//DICE set now
d1=m1;d2=m2;d3=m3;d4=m4;d5=m5;d6=m6;
//END DICE set now
}
cout<<d1<<endl;
return 0;
}
