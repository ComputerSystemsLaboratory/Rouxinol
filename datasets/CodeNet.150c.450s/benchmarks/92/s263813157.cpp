#include<iostream>
#include<math.h>
#include<cstdio>
using namespace std;
int main() {
	int a,b,sum;
	double ans;
	while(cin>>a>>b){
		sum=a+b;
		ans=log10((double)sum);
		cout<<(int)ans+1<<endl;
	}
	return 0;
}
