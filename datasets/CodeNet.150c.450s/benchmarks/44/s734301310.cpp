#include<iostream>
#include<string>
#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;
int main(void){
    int a,b,c,d;
    while(cin>>a>>b>>c>>d){



	int w,x,y,z;
	int hit=0,blow=0;
	cin>>w>>x>>y>>z;
	if(w==a)a=-1,hit++;
	else if(w==b)b=-1,blow++;
	else if(w==c)c=-1,blow++;
	else if(w==d)d=-1,blow++;
	if(x==b)b=-1,hit++;
	else if(x==a)a=-1,blow++;
	else if(x==c)c=-1,blow++;
	else if(x==d)d=-1,blow++;
	if(y==c)c=-1,hit++;
	else if(y==b)b=-1,blow++;
	else if(y==a)a=-1,blow++;
	else if(y==d)d=-1,blow++;
	if(z==d)d=-1,hit++;
	else if(z==b)b=-1,blow++;
	else if(z==c)c=-1,blow++;
	else if(z==a)a=-1,blow++;
	cout<<hit<<" "<<blow<<endl;
    }


	return 0;
}