#include <iostream>
using namespace std;
int main(void){
	int n,asum,bsum,a,b;
	while(1){
		asum=0;bsum=0;
		cin>>n;
		if(!n) return 0;
		while(n--){
		cin>>a;
		cin>>b;
			if(a >= b) asum+=a;
			else bsum+=a;
			if(a <= b) bsum+=b;
			else asum+=b;
		}
		cout<<asum<<" "<<bsum<<endl;
		}
}