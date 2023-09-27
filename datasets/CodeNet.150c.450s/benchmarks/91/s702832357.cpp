#include <iostream>
using namespace std;
#define N 1000000
int a[N];
int main(){
	int i,j;
	a[0]=0;a[1]=0;
	for(i=2;i<N;i++){
		a[i]=1;
	}
	for(i=2;i<N/2+1;i++){
		j=2;
		while(i*j<N){
			a[i*j]=0;
			j+=1;
		}
	}
	int n;
	while(cin>>n){
		j=0;
		for(i=2;i<=n;i++){
			j+=a[i];
		}
		cout<<j<<endl;
	}
}