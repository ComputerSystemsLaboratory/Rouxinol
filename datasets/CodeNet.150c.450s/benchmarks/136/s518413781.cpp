#include<iostream>
#include<algorithm>
using namespace std;
int main(){
	int a,b,c,d;
	int i,j,k;
	while(cin>>a>>b){
		c=a;
		d=b;
		while(d!=0){
			c%=d;
			swap(c,d);
		}
		a/=c;
		b/=c;
		d=a*b*c;
		cout<<c<<" "<<d<<endl;
	}
	return 0;
}
			