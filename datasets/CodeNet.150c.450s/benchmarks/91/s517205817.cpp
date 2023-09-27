#include<iostream>
#define K 1000
#define M 1000000
using namespace std;

int main(){
	int i, j, n, pnum[M]={0}, cnt=0;
	bool notp[M]={true, true, 0};
	i=2;
	j=0;
	while(j<K){
		for(j=i*i;j<M;j+=i){
			notp[j] = true;
		}
		for(j=i+1;j<=K;j++){
			if(notp[j] == false){
				i=j;
				break;
			}
		}
	}
	for(i=0;i<M;i++){
		if(!notp[i]) cnt++;
		pnum[i]=cnt;
	}
	while(cin>>n){
		cout << pnum[n] <<endl;
	}
	return 0;
}