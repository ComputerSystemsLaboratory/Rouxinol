#include <string>
#include <vector>
#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<stack>
#include<queue>
#include<cmath>
#include<algorithm>
#include<functional>
#include<list>
#include<deque>
#include<bitset>
#include<set>
#include<map>
#include<cstring>
#include<sstream>
#include<complex>
#include<iomanip>
#include<numeric>
#define X first
#define Y second
#define pb push_back
#define rep(X,Y) for (int (X) = 0;(X) < (Y);++(X))
#define rrep(X,Y) for (int (X) = (Y-1);(X) >=0;--(X))
#define repe(X,Y) for ((X) = 0;(X) < (Y);++(X))
#define peat(X,Y) for (;(X) < (Y);++(X))
#define all(X) (X).begin(),(X).end()
#define rall(X) (X).rbegin(),(X).rend()

using namespace std;
typedef long long ll;
typedef pair<int,int> pii;
typedef pair<ll,ll> pll;
template<class T> ostream& operator<<(ostream &os, const vector<T> &t) {
os<<"{"; rep(i,t.size()) {os<<t[i]<<",";} os<<"}"<<endl; return os;}
template<class S, class T> ostream& operator<<(ostream &os, const pair<S,T> &t) { return os<<"("<<t.first<<","<<t.second<<")";}
#define re real()
#define im imag()

typedef complex<double> P;
typedef pair<P,P> line; //sX+tY
double EPS=1e-10;
double dot(P a,P b){return (conj(a)*b).real();}
double cros(P a,P b){return (conj(a)*b).imag();}
P proj(P a,P to){
  return dot(a,to)/norm(to)*to;
}
int ccw(P a,P b,P c){
  b-=a; c-=a;
  if(cros(b,c) > EPS) return +1;//ccw
  if(cros(b,c) < EPS) return -1;//cw
  if(dot(b,c) < EPS) return +2; //c-a-b
  if(dot(b,c) > EPS) return -2; //a-b-c or a-c-b
  return 0;
}

int main(){
  ios_base::sync_with_stdio(false);
  cout<<fixed<<setprecision(0);
  int i,j,k;
  P a,b,c,p;
  double are,aim,bre,bim,cre,cim,pre,pim;
  while(cin>>are>>aim>>bre>>bim>>cre>>cim>>pre>>pim){
    a=P(are,aim); b=P(bre,bim); c=P(cre,cim); p=P(pre,pim);
    if(ccw(a,b,p)==ccw(b,c,p) && ccw(b,c,p)==ccw(c,a,p))
      cout<<"YES"<<endl;
    else
      cout<<"NO"<<endl;
  }
  return 0;
}