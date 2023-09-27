#include <iostream>
using namespace std;
int C[10001]={0};
int n=0, a;
int main() 
{
	int maxa=0;
	int mina=10000;
	cin>>n;
	for(int i=0;i<n;i++) {
		cin>>a; 
		++C[a]; 
		if (a>maxa)maxa=a;
		if (a<mina)mina =a;
	}
	bool first = true;
	for(int j=0;j<C[mina];j++){
		if (first) { first=false;} else {cout<<' ';}
		cout<<mina;
	}
	for(int i=mina+1;i<=maxa;i++){
		for(int j=0;j<C[i];j++){
			cout<<' '<<i;
		}
	}
	cout<<endl;
}