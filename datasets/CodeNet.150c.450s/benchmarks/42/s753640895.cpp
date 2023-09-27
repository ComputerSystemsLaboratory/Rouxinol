#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <algorithm>
#include <cstring>
#include <vector>
#include <map>
#include <cmath>
#include <queue>
 
#define rep(i,n) for(int i = 0;i < (n);i++)
#define all(x) (x).begin(),(x).end()
#define pb(x) push_back(x)
#define mp(a,b) make_pair(a,b)

using namespace std;

typedef long long int ll;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef vector<ll> vl;
typedef vector<pair<int, int> > vpi;
typedef vector<pair<ll, ll> > vpl;

int main(){
	cin.tie(0);
	ios::sync_with_stdio(false);
  int n, q;
  cin >> n >> q;
  queue<pair<string, int> > queue;
  rep(i,n){
    string name; int time;
    cin >> name >> time;
    queue.push(mp(name,time));
  }
  int now = 0;
  while(true){
    if(queue.empty()) break;
    if(queue.front().second <= q){
      now += queue.front().second;
      cout << queue.front().first << " " << now << endl;
      queue.pop();
    }else{
      queue.push(mp(queue.front().first, queue.front().second-q));
      now += q;
      queue.pop();
    }
  }
	return 0;
}