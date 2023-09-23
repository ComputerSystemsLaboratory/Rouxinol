#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
#include <queue>
#include <stack>
#include <string>
#include <map>
#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <cstring>

#define rep(i, n) for(int i = 0; i < n; i ++)
#define ALL(T) T.begin(), T.end()
#define mp make_pair
#define pb push_back
#define MEMSET(v, h) memset((v), h, sizeof(v))

using namespace std;

typedef pair<int, int> pii;
typedef long long ll;
typedef vector<int> vi;
typedef vector<string> vs;

const int INF = 1 << 24;
#define N 1000000

int main(void){
	bool is_prime[N+1];
	for(int i=0; i<=N;i++)is_prime[i]=true;
	is_prime[0]=is_prime[1]=false;
	for(int i=2;i<=N;i++)
		if(is_prime[i])
			for(int j=2*i;j<=N;j+=i)
				is_prime[j]=false;

	int a,d,n;
	while(1){
		cin >> a >> d >> n;
		if(!a&&!d&&!n)
			break;
		int count=1;
		while(!is_prime[a]||count!=n){
			if(is_prime[a])
				count++;
			a+=d;
		}
		cout<< a << endl;
	}

    return 0;
}