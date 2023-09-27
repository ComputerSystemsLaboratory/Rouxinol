
#include<iostream>
#include<string>
using namespace std;
int main(){
	long long n;
	long long a=-1000000,b=10000000,c=0;
	cin>>n;
	for(long long i=0;i<n;i++){
		int in;
		cin>>in;
		if(in>=a){
			a=in;
		}else{
		}
		if(in<=b){
			b=in;
		}else{
		}
		c=c+in;
	}
	cout<<b<<" "<<a<<" "<<c<<endl;
}



