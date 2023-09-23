#include <iostream>
using namespace std;

int main(){
	int a,b;
	cin>>a>>b;
	while(true){
		if(a>b){
			a=a%b;
		}else{
			b=b%a;
		}
		if(a==0||b==0)break;
	}
	cout<<max(a,b)<<endl;
	return 0;
} 