#include <iostream>
using namespace std;

int main(){
	int a,b;
	while(cin>>a>>b){
		int a2=a;
		int b2=b;
		while(true){
			if(a>b){
				a=a%b;
			}else{
				b=b%a;
			}
			if(a==0||b==0)break;
		}
	cout<<max(a,b)<<" "<<a2/max(a,b)*b2<<endl;
	}
	return 0;
}