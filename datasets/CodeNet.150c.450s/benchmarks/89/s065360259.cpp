#include<iostream>
using namespace std;

bool prime(int n){
	if(n<2) return false;

	for(int i=2;i*i<=n;i++)
		if(n%i==0) return false;
	return true;
}

int main()
{
	int a,d,n;
	while(cin>>a>>d>>n){
		if(a==0 && d==0 && n==0) return 0;

		int count=0,now=a;
		while(true){
			if(prime(now)) count++;
			if(count==n){cout<<now<<endl;break;}
			now+=d;
		}

	}
}