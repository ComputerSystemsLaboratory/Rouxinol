#include <iostream>
using namespace std;
int main(){
	int a,b,k,n;
	while(cin>>a>>b){
		k=1,n=0;
		while(a+b>=k){
			if(a+b==0){
				n=1;
				break;
			}
			k*=10;
			n+=1;
		}
		cout<<n<<endl;
	}
	return 0;
}