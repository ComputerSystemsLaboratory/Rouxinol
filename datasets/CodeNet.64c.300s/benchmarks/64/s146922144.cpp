#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;

int main(){
	int c,d,a,b=1;
	cin>>c>>d;
	a=min(c,d);
	a=min(a,300000000);
	for(int i=1;i<=a;i++){
		if(c%i==0 && d%i==0){
			b=i;
		}
	}
	cout<<b<<endl;
	return 0;
}