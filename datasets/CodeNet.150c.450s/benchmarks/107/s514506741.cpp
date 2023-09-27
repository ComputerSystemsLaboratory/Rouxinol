#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef pair<ll, ll> P;

#define fi first
#define se second
#define repl(i,a,b) for(ll i=(ll)(a);i<(ll)(b);i++)
#define rep(i,n) repl(i,0,n)
#define each(itr,v) for(auto itr:v)
#define pb push_back
#define all(x) (x).begin(),(x).end()
#define dbg(x) cout<<#x"="<<x<<endl
#define mmax(x,y) (x>y?x:y)
#define mmin(x,y) (x<y?x:y)
#define maxch(x,y) x=mmax(x,y)
#define minch(x,y) x=mmin(x,y)
#define uni(x) x.erase(unique(all(x)),x.end())
#define exist(x,y) (find(all(x),y)!=x.end())
#define bcnt __builtin_popcount

#define INF INT_MAX/3

#define BV_SIZE 64ULL // 64bit
#define MAX_BV_NUM 100 // m <= 100*64 = 6400

unsigned long long Peq[MAX_BV_NUM][0x100];
int levenshteinDistance(string a,string b) {
  int m=a.size(),n=b.size();
  int num_of_bv = (m + BV_SIZE -1) / BV_SIZE;

  for (int i = 0; i < m; i++) {
    Peq[i / BV_SIZE][a[i]] |= 1ULL << ((unsigned long long)i % BV_SIZE);
  }

  // calc
  int score = m;
  unsigned long long Pv[MAX_BV_NUM], Mv[MAX_BV_NUM], Ph[MAX_BV_NUM], Mh[MAX_BV_NUM], Xv[MAX_BV_NUM], Xh[MAX_BV_NUM], Eq[MAX_BV_NUM], Xt[MAX_BV_NUM], Xa[MAX_BV_NUM];
  unsigned long long top = 1ULL << (((unsigned long long)m - 1ULL) % BV_SIZE);

  for(int i = 0; i < num_of_bv; i++) {
    Pv[i] = ~0ULL; Mv[i] = 0ULL;
  }
  Pv[num_of_bv - 1] &= ((top << 1ULL) - 1ULL);
  //cout << static_cast<bitset<64> >(Pv[num_of_bv - 1]) << endl;

  for (int j = 0; j < n; j++) {
    for(int i = 0; i < num_of_bv; i++){
      Eq[i] = Peq[i][b[j]];
      Xv[i] = Eq[i] | Mv[i];
      Xt[i] = Eq[i] & Pv[i];
    }

    unsigned long long carry = 0ULL;

    for(int i = 0; i < num_of_bv; i++){
      Xa[i] = Xt[i] + Pv[i] + carry;
      if(Xt[i] == ~0ULL && carry == 1ULL){
        carry = 1ULL;
      }else{
        unsigned long long cXt = Xt[i] + carry;
        carry = (((cXt & Pv[i]) | ((cXt | Pv[i]) & ( ~ (cXt + Pv[i]) ))) >> 63ULL) & 1ULL;
      }
    }

    for(int i = 0; i < num_of_bv; i++){
      Xh[i] = (Xa[i] ^ Pv[i]) | Eq[i];
    }

    for(int i = 0; i < num_of_bv; i++){
      Ph[i] = Mv[i] | ( ~ (Xh[i] | Pv[i]) );
      Mh[i] = Pv[i] & Xh[i];
    }

    if((Ph[num_of_bv - 1] & top) != 0ULL)score++;
    else if((Mh[num_of_bv - 1] & top) != 0ULL)score--;    

    unsigned long long Ph_carry = 1ULL;
    unsigned long long Mh_carry = 0ULL;

    /*
    for(int i = num_of_bv - 1; i >= 0; i--){
      for(int k = 63; k >= 0; k--){
        if((Ph[i] >> k) & 1ULL)cout<<1;
        else cout<<0;
      }
    }
    cout<<endl;
    */

    for(int i = 0; i < num_of_bv; i++){
      unsigned long long nxt_Ph_carry = (Ph[i] >> 63ULL) & 1ULL;
      Ph[i] = (Ph[i] << 1ULL) | Ph_carry;
      Ph_carry = nxt_Ph_carry;
    }
    /*
    for(int i = num_of_bv -1; i >= 0; i--){
      for(int k = 63; k >= 0; k--){
        if((Ph[i] >> k) & 1ULL)cout<<1;
        else cout<<0;
      }
    }
    cout<<endl;
    cout<<endl;
    */

    for(int i = 0; i < num_of_bv; i++){
      unsigned long long nxt_Mh_carry = (Mh[i] >> 63ULL) & 1ULL;
      Pv[i] = ((Mh[i] << 1ULL) | Mh_carry ) | ( ~ (Xv[i] | Ph[i]) );
      Mh_carry = nxt_Mh_carry;
    }

    for(int i = 0; i < num_of_bv; i++){
      Mv[i] = Ph[i] & Xv[i];
    }
  }
  return score;
}

int main(){
	string a,b;
  cin>>a>>b;
  cout<<levenshteinDistance(a,b)<<endl;
	return 0;
}