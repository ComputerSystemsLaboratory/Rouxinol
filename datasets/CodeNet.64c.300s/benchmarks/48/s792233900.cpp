#include <iostream>
using namespace std;

int Prime[1000000];

int main() {
	for(int i=0;i<1000000;++i)Prime[i]=1;
	
	Prime[0]=0;
	Prime[1]=0;
	
	for(int i=2;i<1000000;++i){
		if(Prime[i]){
			for(int j=i*2;j<1000000;j+=i){
				Prime[j]=0;
			}
		}
	}
	
	int n,cnt;
	while(cin>>n){
		cnt = 0;
		for(int i=0;i<=n;++i){
			cnt+=Prime[i];
		}
		cout<<cnt<<endl;
	}
	
	return 0;
}