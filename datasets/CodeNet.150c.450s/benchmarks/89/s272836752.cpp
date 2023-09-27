#include <bits/stdc++.h>

using namespace std;

int main(){
	vector<bool> isprime(1000000,true);
	isprime[0] = isprime[1] = false;
	for(int i = 2; i < 1000000; i++){
		if(isprime[i]){
			for(int j = 2; i*j < 1000000; j++){
				isprime[i*j] = false;
			}
		}
	}
	vector<int> p;
	for(int i = 0; i < 1000000; i++){
		if(isprime[i])p.push_back(i);
	}
	while(true){
		int a,d,n; cin >> a >> d >> n;
		if(a == 0)break;
		int cnt = 0;
		for(int i = a; i < 1000000; i+= d){
			if(*lower_bound(p.begin(),p.end(),i) == i){
				cnt++;
				if(cnt == n){
					cout << i << endl;
					break;
				}
			}
		}
	}



	return 0;
}


