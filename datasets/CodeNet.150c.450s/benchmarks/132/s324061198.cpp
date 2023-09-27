#include <iostream>
#include <cstdio>
using namespace std;
#define N 50

int main(){
	while(1){
		int n,m;
		int ca[N];
		cin >> n >> m;
		if(!n&&!m) break;
		fill(ca,ca+n,0);
		
		int wan = m;
		int k = 0;
		while(1){
			while(wan){
				ca[k]++;
				k++;
				k = k%n;
				wan--;
			}
			if((k==0&&ca[n-1]==m)||(ca[k-1]==m)){
				break;
			}else{
				wan = ca[k];
				ca[k] = 0;
				k++;
				k = k%n;
			}
		}
		if(!k){
			cout << n-1 << endl;
		}else{
			cout << k-1 << endl;
		}
	}
	return 0;
}