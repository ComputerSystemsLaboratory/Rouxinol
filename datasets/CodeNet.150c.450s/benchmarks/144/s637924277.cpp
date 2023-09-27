#include<stdio.h>
#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<string.h>
#include<math.h>
#include<utility>
#include<map>
using namespace std;
typedef long long int ll;
typedef long double ld;
typedef vector<ll> vi;
typedef vector<string> vs;
typedef pair<ll,ll> P;
typedef vector<P> vp;
#define REP(i,n) for(ll i=0;i<n;i++)
#define FOR(i,m,n) for(ll i=m;i<n;i++)
#define REPR(i,n) for(ll i=n-1;i>=0;i--)
#define FORR(i,n,m) for(ll i=n-1;i>=m;i--)
#define all(in) in.begin(),in.end()
#define ALL(in,K) in,in+K
#define INF 100000000
#define MOD 100000007
#define SIZE 100005
#define pi 	3.14159265358979323846

int main(){
	
	ll n,m,l;
	cin >> n >> m >> l;
	
	ll A[100][100];
	REP(i,n){
		REP(j,m){
			cin >> A[i][j];
		}
	}
	
	ll B[100][100];
	REP(i,m){
		REP(j,l){
			cin >> B[i][j];
		}
	}
	
	REP(i,n){
		REP(j,l){
			ll op = 0;
			REP(k,m){
				op += A[i][k]*B[k][j];
				//printf("<%d><%d>",(int)A[n][k],(int)B[k][m]);
				//printf("(%d)",(int)op);
			}
			//printf("[%d][%d]",(int)i,(int)j);
			cout << op;
			if(!(j==l-1)){
				cout << " ";
			}
		}
		cout << endl;
	}	return 0;
}
