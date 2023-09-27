#include <iostream>
using namespace std;
int main(){
	unsigned long long a,b,c;
	while(cin>>a>>b){
		c=a*b;
		if(a==b){
			cout<<a<<" "<<b<<endl;
		}else{
			while(!(a==0 || b==0)){
				if(a>b){
					a-=b;
				}else{
					b-=a;
				}
			}
			cout<<((a==0)?b:a)<<" "<<c/((a==0)?b:a)<<endl;
		}
	}
	return 0;
}