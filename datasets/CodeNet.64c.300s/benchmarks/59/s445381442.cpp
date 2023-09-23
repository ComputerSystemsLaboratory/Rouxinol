#include <set>
#include <map>
#include <list>
#include <queue>
#include <stack>
#include <cmath>
#include <ctype.h>
#include <ctime>
#include <cstdio>
#include <vector>
#include <string>
#include <bitset>
#include <cctype>
#include <cstdlib>
#include <cstring>
#include <utility>
#include <numeric>
#include <complex>
#include <sstream>
#include <fstream>
#include <iomanip>
#include <cassert>
#include <iostream>
#include <iterator>
#include <algorithm>
#define ALL(g) (g).begin(),(g).end()
#define REP(i, x, n) for(int i = x; i < n; i++)
#define rep(i,n) REP(i,0,n)
#define F(i,j,k) fill(i[0],i[0]+j*j,k)
#define P(p) cout<<(p)<<endl;
#define EXIST(s,e) ((s).find(e)!=(s).end())
#define INF 1<<25
#define pb push_back
using namespace std; 
typedef vector<int> vi;
typedef vector<long long> vl;
typedef vector<double> vd;
typedef pair<int,int> pii;
typedef pair<long,long> pll;
typedef long long ll;

bool *isprime;

bool isPrime(int n){
	if(n == 1){
		return false;
	}
	if(n == 2){
		return true;
	}
	if(n > 2 && n % 2 == 0){
		return false;

	}
	int i = 3;
	while(i <= (int)sqrt(n)){
		if(n % i == 0){
			return false;
		}
		i += 2;
	}
	return true;	
}

int main(){
	int count = 0;
	int n,num;
	cin >> n;
	rep(i,n){
		cin >> num;
		if(isPrime(num)){
			count++;
		}
	}
	P(count);
	return 0;
}