#include <cstdio>
#include <iostream>
#include <algorithm>
#define F first
#define S second
using namespace std;
int n;
long long m;
int d;
int p;
pair<int,int> a[11111];

int main(void){
  while(cin >> n >> m){
    if(!n) break;
    for(int i = 0; i < n; i++){
      cin >> d >> p;
      a[i] = make_pair(p,d);
    }
    sort(a,a+n,greater<pair<int,int> >());
    long long res = 0;
    for(int i = 0; i < n; i++){
      if(!m){
	res += a[i].F * a[i].S;
      }else if(a[i].S < m){
	m -= a[i].S;
      }else{
	res += a[i].F * (a[i].S-m);
	m = 0;
      }
    }
    cout << res << endl;
  }
}