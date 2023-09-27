//	created : 16/03/06
// 	autor   : Rp7rf
#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdio>
#include <cstring>
#include <set>
typedef long long ll;
typedef unsigned long long ull;
using namespace std;
#define rep(i,a) for(int i = 0 ; i < a ; i ++)
#define loop(i,a,b) for(int i = a ; i < b ; i ++)
#define vi vector<int>
#define mp make_pair
#define pb push_back
#define MOD 1000000007
#define INF 1e9
#define MAX 999999 + 10
bool prime[MAX];
int cnt[MAX];

void init_prime(){
	rep(i,MAX){
		prime[i] = true;
		
	}
	prime[0] = prime[1] = false;
	int c = 0;
	rep(i,MAX){
		if(prime[i]){
			for(int j = i + i ; j < MAX ; j += i){
				prime[j] = false;
			}
			c++;
		}
		cnt[i] = c;

	}
}

int main(void){
	init_prime();
	int n ;
	while(cin>>n){
		cout<<cnt[n]<<endl;
	}
}