#include<bits/stdc++.h>
using namespace std;
int main(void){
	int a,b,x,y,r;
	while(1){
		cin>>a>>b;
		if(cin.eof())	break;
		x=a;	y=b;
		while(1){
			if(b>a)	swap(a,b);
			r=a%b;
			if(r==0)	break;
			a=b;
			b=r;
		}
		cout<<b<<" "<<(long long)x*y/b<<endl;
	}
	return 0;
}

