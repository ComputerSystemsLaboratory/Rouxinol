#include <iostream>
#include <string>
#include <map>
#include <vector>
#include <algorithm>

using namespace std;

#define REP(i,k,n) for(int i=k;i<n;i++)
#define rep(i,n) for(int i=0;i<n;i++)

#define all(v) v.begin(),v.end()
#define INF 1<<30
#define mp make_pair
#define pb push_back

#define fi first
#define se second

#define each(it,c) for(auto it=(c).begin();it!=(c).end();it++)

typedef vector<int> vi;
typedef vector<vi> vvi;
typedef pair<int,int> pii;
typedef vector<pair<int, int> > vp;

typedef long long ll;
int main(){
  while(1){
  	int n;
  	int s[10100];
  	int e[10100];
  	cin >> n;
  	if(n==0) break;
  	rep(i,n*2){
  		string str;
  		cin >> str;
  		
  		//??????????????°????????????
  		int hh = (char(str[0])-'0')*10+char(str[1])-'0';
  		int mm = (char(str[3])-'0')*10+char(str[4])-'0';
  		int ss = (char(str[6])-'0')*10+char(str[7])-'0';
  		// cout << hh << "mm" << mm << "ss"<<ss << endl;
  		int time = hh*3600+mm*60+ss;
  		if(i%2==0) s[i/2] = time;
  		else e[i/2] = time;
  	}
  	sort(s,s+n);
  	sort(e,e+n);
  	int sp = 0;
  	int ep = 0;
  	int ans = 0;
  	int tm = 0;
  	rep(i,n*2){
  		if(sp!=n&&(ep==n||s[sp]<e[ep])){
  			ans++;
  			sp++;
  			// cout << "a";
  		}else{
  			ans--;
  			ep++;
  			// cout << "b";
  		}
  		tm = max(tm,ans);
  		// cout <<endl << "tm:" <<tm << endl;
  	}
  	cout << tm << endl;

  }
  return 0;
}