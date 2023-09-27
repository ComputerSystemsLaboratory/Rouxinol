#include <iostream>
#include <algorithm>
#include <vector>
//#include <stack>
//#include <queue>
//#include <map>
#include <cmath>
//#include <string>
//#include <sstream>
#include <iomanip>
//#include <complex>
#include <stdio.h>
//小数制度 	cout << fixed << setprecision(5) << tmp << endl;
using namespace std;

#define ll long long
#define vvi vector< vector<int> >
#define All(X) X.begin(),X.end()
#define FOR(i,a,b) for(int i=(int)(a);i<(int)(b);i++)
#define REP(i,n) for(int i=0;i<(int)(n);i++)

int st[10001];
int en[10001];
vector < pair <int , int > > v;
int main(){
 int n;
  while(cin >> n,n){
  	int h,m,s;
  	v.clear();
  	REP(i,n){
	  	scanf("%d:%d:%d",&h,&m,&s);
  		v.push_back(make_pair(h*3600+m*60+s,1));
	  	scanf("%d:%d:%d",&h,&m,&s);
  		v.push_back(make_pair(h*3600+m*60+s,-1));
  	}
  	sort(All(v));
  	//for(int i = 0 ; i < v.size();++i) cout << v[i].first << ":" << v[i].second << endl;
  	//event処理
  	int res , ans ;

    res = ans = 0;
    for(int i = 0 ; i < v.size();++i){
      res += v[i].second;
      ans = max(ans,res);
    }
    printf("%d\n",ans);
  }
  return 0;
}