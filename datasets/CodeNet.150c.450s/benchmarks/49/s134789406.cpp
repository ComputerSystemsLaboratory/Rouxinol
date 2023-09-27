#include <iostream>
#include <string>
#include<algorithm>
using namespace std;

int main() {
	int n,point,sum,ma,mi;
	
	while(cin>>n){
		if(n==0)break;
		sum=0;
		ma=0;
		mi=1000;
		for(int i=0;i<n;i++){
			cin>>point;
			sum+=point;
			if(ma<point)ma=point;
			if(mi>point)mi=point;
		}
		cout<<(sum-ma-mi)/(n-2)<<endl;;
			}
	
	
	return 0;
}