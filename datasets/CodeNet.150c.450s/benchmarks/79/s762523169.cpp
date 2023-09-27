#include <bits/stdc++.h>
#define REP(i,n) for (int i=0;i<(n);i++)
#define ALL(a) (a).begin(),(a).end()
#define RFOR(i,a,b) for (int i=(b)-1;i>=(a);i--)
#define REP(i,n) for (int i=0;i<(n);i++)
#define RREP(i,n) for (int i=(n)-1;i>=0;i--)
#define ll long long
#define ull unsigned long long
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};

using namespace std;
int n,r;
int p,c;
vector<int> card;
vector<int> tmp;
int main(){
  while(true){

    cin >> n >> r;
    if(n==0&&r==0)break;
    card.resize(n);
    REP(i,n)card[i]=i+1;
    REP(i,r){
      cin >> p >> c;
      for(int j=n-p+1;j<n-p+1+c;j++)
	tmp.push_back(card[j-c]);
      for(int j=n-p+1;j<n;j++){
    card[j-c] = card[j];
      }
      /*      REP(k,n)cout << card[k] << " ";
	      cout << "\n";*/
    if(p!=1)
      for(int j=n-c;j<n;j++)
        card[j] =tmp[j-n+c];
    /*      REP(k,n)cout << card[k] << " ";
	    cout << "\n";*/
      tmp.clear();
    }
    cout << card[n-1] << endl;
    card.clear();

  }

  return 0;
    
}