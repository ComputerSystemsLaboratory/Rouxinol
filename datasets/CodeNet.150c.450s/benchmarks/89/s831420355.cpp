#include <iostream>
#include <cmath>
#include <cstring>
using namespace std;

void mkPrime(int n,bool p[]){
	int i,j;
	p[0]=p[1]=0;
	for(i=2;i<=n;i++) p[i]=1;
	for(i=2;i<=sqrt(n);i++) if(p[i]) for(j=i*2;j<=n;j+=i) p[j]=0;
}

int main(void){
	int a,d,n;
	bool p[1000050];

	mkPrime(1000040,p);
	while(cin>>a>>d>>n && (a||d||n)){
		for(;n!=0;a+=d) if(p[a]) n--;
		cout<<a-d<<endl;
	}

	return 0;
}