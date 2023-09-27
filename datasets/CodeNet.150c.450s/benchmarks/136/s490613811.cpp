#include<iostream>
#include<stdio.h>
#include<math.h>
using namespace std;

int gcd(int u, int v) {
  int r;
  while (0 != v) {
    r = u % v;
	u = v;
	v = r;
  }
  return u;
}

int main(){
	int a,b;
	double x;
	while(scanf("%d",&a)!=EOF){
		cin>>b;
	cout<<gcd(a,b)<<" ";
	x=(double)a*b;
	//cout<<x<<endl;
	if(a<b){
		int tmp = a;
		a = b;
		b = tmp;
	}
	printf("%0.0f\n",x/(double)gcd(a,b));
	}
    return 0;
}