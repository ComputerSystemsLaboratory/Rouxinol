#include<bits/stdc++.h>
#define X first
#define Y second
#define pb push_back
#define eb emplace_back
#define rep(X,Y) for (int (X) = 0;(X) < (Y);++(X))
#define rrep(X,Y) for (int (X) = (Y)-1;(X) >=0;--(X))
#define all(X) (X).begin(),(X).end()
#define rall(X) (X).rbegin(),(X).rend()
#define reps(i,j,k) for(int i=(j);i<=(k);++i)
#define in(i,j,k) ((i)>=(j)&&(i)<=(k))
#define sz size()


using namespace std;
typedef long long ll;
typedef pair<int,int> pii;

typedef pair<int,pii> piii;

vector<piii> days;

int main(){
  rep(i,1000)if(i)
    rep(j,11)if(j)
      rep(k,19+(j%2==1||i%3==0))
	days.eb(i,pii(j,k));
  int n;
  cin>>n;
  piii day;
  rep(i,n){
    cin>>day.X>>day.Y.X>>day.Y.Y;
    cout<<1+days.end()-lower_bound(all(days),day)<<endl;
  }
}