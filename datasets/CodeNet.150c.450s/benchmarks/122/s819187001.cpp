#include <iostream>
#include <string>
#include <sstream>
#include <algorithm>
#include <vector>
#include <utility>
#include <stack>
#include <queue>
#include <map>
#include <set>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cmath>
 
using namespace std;
 
#define rep(i,n) for(int i=0; i<(n); i++)
#define repc(i,s,e) for(int i=(s); i<(e); i++)
#define pb(n) push_back((n))
#define mp(n,m) make_pair((n),(m))
#define all(r) r.begin(),r.end()
#define fi first
#define se second
 
typedef long long ll;
typedef vector<int> vi;
typedef vector<vi> vii;
typedef vector<ll> vl;
typedef vector<vl> vll;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
 
 
 
 
const int INF = 1000000;
 

const int MAX_N = 4010;
const int MAX_M = 4010;





int main(){
	priority_queue<int> q;
	string s;
	int n;
	while(cin>>s){
		if(s=="end") break;
		if(s =="insert"){
			cin>>n;
			q.push(n);
		}
		else{
			cout<<q.top()<<endl;
			q.pop();
		}
	}
}