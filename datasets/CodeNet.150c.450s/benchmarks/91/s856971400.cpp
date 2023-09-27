#include <iostream>
#include <iomanip>
#include <functional>
#include <algorithm>
#include <vector>
#include <string>
#include <queue>
#include <stack>
#include <set>
#include <map>
#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <cstring>
#include <climits>
#include <cctype>
using namespace std;
#define INF 0x3f3f3f3f
#define MP(X,Y) make_pair(X,Y)
#define PB(X) push_back(X)
#define REP(X,N) for(int X=0;X<N;X++)
#define REP2(X,L,R) for(int X=L;X<=R;X++)
#define DEP(X,R,L) for(int X=R;X>L;X--)
#define DEP2(X,R,L) for(int X=R;X>=L;X--)
#define CLR(A,X) memset(A,X,sizeof(A))
#define IT iterator
typedef long long ll;
typedef unsigned long long ull;
typedef pair<int,int> PII;
typedef vector<PII> VII;
typedef vector<int> VI;
#define X first
#define Y second
#define lson(X) ((X)<<1)
#define rson(X) ((X)<<1|1)
const int MAXN=1e7+5;


int phi[MAXN];
void eular(){
 	for(int i = 0; i<MAXN;i++) phi[i] = 1;
 	for(int i = 2; i<MAXN;i++)
 		if(phi[i] == 1)
 			for(int j = i+i;j<MAXN;j+=i)
 				phi[j] = 0;
 }
 
 
 int main(){
 	eular();
 	int n;
 	while(cin>>n)
 	{
 		int cnt=0;
 		REP2(i,2,n){
 			if(phi[i]) cnt++;
 		}	
 		cout<<cnt<<endl;
 		
	}
 	
 	
 	return 0;
 }