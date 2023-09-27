#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <set>
#include <cmath>
#include <stdio.h>
#include <list>
#include <numeric>
#include <stack>
#include <queue>
#include <tuple>
#include <bitset>
#include <map>
#include <math.h>
//ceil(a/b)   (a + (b - 1))/ b
using namespace std;
#define rep(i,n) for(int i = 0; i < (n); i++)
typedef long long ll;
typedef pair<int,int> P;
const int inf=1000000007;
const ll mod=1000000007;
const double PI=3.14159265358979323846;
int dx[] = {1,-1,0,0};
int dy[] = {0,0,1,-1};

ll gcd(ll a, ll b){
  if (b==0) return a;
  else return gcd(b,a%b);
}

int cans(bool f){
  if(f) cout << "Yes" << endl;
  else cout << "No" << endl;
  return 0;
}



int main() {
  map<string,int> mp;
  int N;
  cin >> N;
  mp["AC"] = 0;
  mp["WA"] = 0;
  mp["TLE"] = 0;
  mp["RE"] = 0; 
  rep(i,N) {
	string s;
	cin >> s;
	mp[s]++;
  }
  printf("AC x %d\n",mp["AC"]);
  printf("WA x %d\n",mp["WA"]);
  printf("TLE x %d\n",mp["TLE"]);
  printf("RE x %d\n",mp["RE"]);
}

