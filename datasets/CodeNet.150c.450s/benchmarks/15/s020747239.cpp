#include <stdio.h>
#include <iostream>
#include <string>
#include <cstdlib>
#include <sstream>
#include <cstring>
#include <stdexcept>
#include <vector>
using namespace std;


#define abs(N) ((N>0)?N:-1*N)
#define lt(A,B) ((A>B)?B:A)
#define gt(A,B) ((A<B)?B:A)
#define print(S) (cout << S)
#define println(S) (cout << S << endl)
#define ll long long int

int main(){
	int n,q;
	cin >> n;
	ll S[n+1];
	for (int i = 0; i < n; ++i) {
		cin >> S[i];
	}
	cin >> q;
	int cnt=0;
	for (int i = 0; i < q; ++i) {
		ll Q;
		cin >> Q;
		int j=0;
		S[n] = Q;
		while(S[j]!=Q){
			j++;
		}
		if(j!=n) cnt++;
	}
	println(cnt);

	return 0;
}

