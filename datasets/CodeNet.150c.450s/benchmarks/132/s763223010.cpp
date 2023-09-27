#include <bits/stdc++.h>
#define cinf(n,x) for(int i=0;i<(n);i++) cin >> x[i];
typedef long long int ll;
using namespace std;

int main(){
	int n,p;
	int have[50];
	while(true){
		cin >> n >> p;
		if(n==0 && p==0) break;
		for(int i=0;i<n;i++) have[i]=0;
		int turn=0;
	    int cnt=p;
		while(true){
			if(cnt>0){
				cnt--;
				have[turn%n]++;
				if(have[turn%n]==p){
					cout << turn%n << endl;
					break;
				}

			}
			else{
					cnt =have[turn%n];
					have[turn%n]=0;
				}
			turn++;

		}

	}
}
