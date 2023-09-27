#include <iostream>
#include <algorithm>
#include <vector>
#include <cstdio>
#include <cmath>
#include <string>
#include <queue>
#include <stack>
#include <sstream>
using namespace std;
int main(){
	int i=0,a,b,c,d,e,f,g,ans;
	while(i<5){
		cin>>a;
		if(a==0)break;
		b=1000-a;
		c=b%500;
		d=c%100;
		e=d%50;
		f=e%10;
		g=f%5;
		ans=b/500+c/100+d/50+e/10+f/5+g;
		cout<<ans<<endl;
		ans=0;
		i++;
	}
	return 0;
}