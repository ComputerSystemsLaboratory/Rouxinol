#include<cstdio>
#include<iostream>
using namespace std;
int main(void){
	int n,asum,bsum,a,b,i;
	while(1){
		cin>>n;
		if(n==0)break;
		asum=0; bsum=0;
		for(i=0;i<n;i++){
			cin>>a>>b;
			if(a==b)asum+=a,bsum+=b;
			if(a>b)asum+=a+b;
			if(b>a)bsum+=a+b;
		}
		cout<<asum<<' '<<bsum<<endl;
	}
	return 0;
}