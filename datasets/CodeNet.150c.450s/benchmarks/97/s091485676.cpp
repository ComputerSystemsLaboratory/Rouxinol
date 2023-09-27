#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef pair<int,int> pii;
typedef vector<int> VI;
typedef vector<VI> VVI;
const double PI = 3.14159265358979323846;
const double EPS = 1e-12;
const int INF = numeric_limits<int>::max() / 2;
const int NEG_INF = numeric_limits<int>::min() / 2;

int main(){
  cin.tie(0);
  ios::sync_with_stdio(false);

  int p;
  while(true){
    cin >> p;
    if(p==0) break;
    int u[p],d[p],l[p],r[p];
    int U=1,D=0,L=0,R=1;
    u[0]=1;d[0]=0;l[0]=0;r[0]=1;
  //d::0-l,1-d,2-r,3-u
    for(int i=1;i<p;i++){
      int n,dir;
      cin >> n >> dir;
      if(dir==0){
        u[i]=u[n];d[i]=d[n];l[i]=l[n]-1;r[i]=r[n]-1;
        U=max(U,u[i]);D=min(D,d[i]);L=min(L,l[i]);R=max(R,r[i]);
      }
      else if(dir==1){
        u[i]=u[n]-1;d[i]=d[n]-1;l[i]=l[n];r[i]=r[n];
        U=max(U,u[i]);D=min(D,d[i]);L=min(L,l[i]);R=max(R,r[i]);
      }
      else if(dir==2){
        u[i]=u[n];d[i]=d[n];l[i]=l[n]+1;r[i]=r[n]+1;
        U=max(U,u[i]);D=min(D,d[i]);L=min(L,l[i]);R=max(R,r[i]);
      }
      else{
        u[i]=u[n]+1;d[i]=d[n]+1;l[i]=l[n];r[i]=r[n];
        U=max(U,u[i]);D=min(D,d[i]);L=min(L,l[i]);R=max(R,r[i]);
      }
    }
    cout << R-L << " " << U-D << endl;
  }
}