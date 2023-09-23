#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<stack>
#include<queue>
#include<list>
#include<set>
#include<cmath>

#define REP(i,n) for(int (i) = 0;(i) < (n);(i)++)
using namespace std;

long long int Pow(long long int n,long long int  m){
	if(m==0)return 1;
	if(m==1)return n;
	if(m%2) return (n*Pow((n*n)%1000000007,m/2))%1000000007;
	return Pow((n*n)%1000000007,m/2)%1000000007;
}

int main(){
	int n,m;
	cin >> n >> m;
	cout << Pow(n,m) << endl;
}