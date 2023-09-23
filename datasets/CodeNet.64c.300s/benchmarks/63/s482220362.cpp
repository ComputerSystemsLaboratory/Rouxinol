#include <iostream>

using namespace std;

int main()
{
    long long int flag,a1,b1,t,k,a,b;
    while(cin>>a>>b){
		if(a==b){
			cout<<'1'<<" "<<a<<endl;
			continue;
		}
    	a1=a,b1=b;
		if(a<b)
			t=a,a=b,b=t;
		k=a%b;
		while(k){
			a=b;
			b=k;
			k=a%b;
		}
		cout<<b<<" "<<(a1/b)*b1<<endl;
    }
}