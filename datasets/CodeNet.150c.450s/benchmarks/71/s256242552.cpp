#include<iostream>
#include<vector>
#include<algorithm>
#include<string>

#define add push_back
#define inf 2147000000

#define rep(i,n) for(int i=0;i<n;i++)
#define deb(a) cout<<a<<endl
#define out(a) cout<<a<<endl;

using namespace std;

int main(void){
	int a;
	int cont;
	while(scanf("%d",&a)!=EOF){
		cont=0;
	rep(i,10)rep(j,10)rep(k,10)rep(l,10){
		if(i+j+k+l == a){
			cont++;
		}
	}
	cout<<cont<<endl;
	}
}