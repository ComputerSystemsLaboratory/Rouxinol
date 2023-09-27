#include <vector>
#include <iostream>
#include <valarray>
#include <string>
#include <algorithm>
#include <set>
#include <cstdio>
typedef unsigned long long ull;
typedef long long ll;
#define fst first
#define snd second
#define rep(i,n) for(ull i = 0;i<(n);i++)
#define rep1(i,n) for(ull i = 1;i<=(n);i++)
#define revrep(i,n) for(ull i = (n-1);i>=0;i--)
#define all(n) (n).begin(),(n).end()
#define show(x) cout << "debug " << #x << ":" << x << endl;
#define showvec(x) cout << endl << "debug " << #x << ";" << endl; \
    for(ull __i = 0;__i < x.size();__i++){ \
        for(ull __j = 0;__j<x[0].size();__j++){ \
            cout << x[__i][__j] << " "; \
        } \
        cout << endl; \
    } \
    cout << endl;
using namespace std;

int f(int x){
	return x*x;
}

int main(){
	int d;
	while(~scanf("%d\n",&d)){
		ll sum = 0;
		for(int x = d;x <= 600 - d; x += d){
			sum += d * f(x);
		}
		cout << sum << endl;
	}
}