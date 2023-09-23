#include <iostream>
using namespace std;
const int maxn=1e6 + 10;
int p[maxn],inp[maxn],f[maxn],top;
void init(){
	for(int i=2;i<maxn;i++){
		if(!inp[i]){
			p[top++]=i;
		}
		for(int j=0;j<top && i*p[j]<maxn;j++){
			inp[i*p[j]]=1;
			if(!(i%p[j]))
				break;
		}
		f[i]=f[i-1]+1-inp[i];
	}
}
int main(){
	init();
	int n;
	while(cin>>n){
		cout<<f[n]<<endl;
	}
	return 0;
}