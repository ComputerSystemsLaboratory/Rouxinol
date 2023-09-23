#include <iostream>
#include <cstring>
using namespace std;

char p[1000001];

int main(void){
	int a,d,n;

	memset(p,1,sizeof(p));
	p[0] = p[1] = 0;
	for(int i=2;i<=1000000;i++){
		if(p[i]){
			for(int j=i*2;j<=1000000;j+=i){
				p[j] = 0;
			}
		}
	}

	while(cin>>a>>d>>n && (a||d||n)){
		while(1){
			if(p[a]){
				n--;
				if(n == 0) break;
			}
			a += d;
		}

		cout<<a<<endl;
	}

	return 0;
}