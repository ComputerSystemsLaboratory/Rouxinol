
#include <cstdio>
#include <cstdlib>
#include <ctime>
#include <cmath>
#include <cstring>
#include <cctype>
#include <complex>
#include <iostream>
#include <sstream>
#include <algorithm>
#include <functional>
#include <vector>
#include <string>
#include <stack>
#include <queue>
#include <map>
#include <set>
#include <bitset>
#include <numeric>
using namespace std;
const int dx[]={1,0,-1,0,1,-1,-1,1};
const int dy[]={0,1,0,-1,1,1,-1,-1};
const int INF = 1<<30;
const int EPS = 1e-15;
#define PB push_back
#define fi first
#define se second
#define ll long long
#define reps(i,j,k) for(int i = (j); i < (k); i++)
#define rep(i,j) reps(i,0,j)
#define MOD 1000000007
typedef pair<int,int> Pii;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef pair<int,int > Pii;
bool PRIME[1000001];
void Prime(){
	PRIME[0] = PRIME[1] = true;
	for(int i = 2; i*i <= 1000000; i++){
		if(!PRIME[i]){
			for(int j = i*i; j <= 1000000; j+=i){
				PRIME[j] = true;
			}
		}
	}
}
int main(){
	Prime();
	int a,d,n;
	while(scanf("%d%d%d",&a,&d,&n),(a|d|n)){
		int cnt = 0;
		while(true){
			if(!PRIME[a])cnt++;
			if(cnt == n){
				printf("%d\n",a);
				break;
			}
			a+=d;
		}
	}
	return 0;
}