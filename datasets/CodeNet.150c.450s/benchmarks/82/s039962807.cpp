#include <iostream>
#include <cstdio>
#include <cassert>
#include <algorithm>
#include <vector>
#include <string>
#include <numeric>
#include <cmath>
using namespace std;
typedef long long ll;
typedef long double ld;
#define REP(i,n) for(int i=0, i##_len=(n); i<i##_len; ++i)
#define REPR(i,n) for(int i=n; i>-1; --i)
#define ALL(a) (a).begin(),(a).end()
#define FILL(a,x); REP(i,sizeof(a)){ (a)[i]=(x); }
#define CINA(a,n); REP(i,(n)){ cin >> (a)[i]; }
#define FILL2(a,n,m,x); REP(i,(n)){ REP(j,(m)){(a)[i][j]=(x);} }
#define CINA2(a,n,m); REP(i,(n)){ REP(j,(m)){cin >> (a)[i][j];} }
#define Liny "Yes\n"
#define Linn "No\n"
#define LINY "YES\n"
#define LINN "NO\n"
#define PI 3.141592653589793

//cout << setfill('0') << right << setw(4) << 12; // "0012"
int keta(ll x){ if(x<10){return 1;} else{return keta(x/10) + 1;}}
int keta_wa(ll x){ if(x<10){return x;} else{return keta_wa(x/10) + x%10;} }
int ctoi(char c){ return ( (c>='0' && c<='9')? c - '0': 0 );}
ll sum(ll a[],ll N){ return accumulate(a,a+N,0LL);}
ll gcd(ll a,ll b){if(a<b)swap(a,b); return b?gcd(b,a%b):a;}
ll lcm(ll a,ll b){if(a<b){swap(a,b);} return a/gcd(a,b)*b;}


class Dice{
    public:
        int top;
        int btm;
        int lft;
        int rgt;
        int fwd;
        int bck;
        
        Dice(){
            top = 1;
            fwd = 2;
            rgt = 3;
            lft = 4;
            bck = 5;
            fwd = 6;
        }
        
        Dice(int _top,int _fwd, int _rgt, int _lft, int _bck, int _btm){
            top = _top;
            fwd = _fwd;
            rgt = _rgt;
            lft = _lft;
            bck = _bck;
            btm = _btm;
        }
        
        void turn(char c){
            int _top = top;
            int _fwd = fwd;
            if(c=='N'){
                top = fwd;
                fwd = btm;
                btm = bck;
                bck = _top;
            }else if(c=='S'){
                top = bck;
                bck = btm;
                btm = fwd;
                fwd = _top;
            }else if(c=='E'){
                top = lft;
                lft = btm;
                btm = rgt;
                rgt = _top;
            }else if(c=='W'){
                top = rgt;
                rgt = btm;
                btm = lft;
                lft = _top;
            }else if(c=='C'){
                fwd = rgt;
                rgt = bck;
                bck = lft;
                lft = _fwd;
            }else if(c=='R'){
                fwd = lft;
                lft = bck;
                bck = rgt;
                rgt = _fwd;
            }else{
                cout << "err\n";
                exit(1);
            }
        }
        
        
        void set(int _top, int _fwd){
            if(rgt == _top){
                this->turn('W');
            }else if(lft == _top){
                this->turn('E');
            }else{
                while(top != _top){
                    this->turn('N');
                }
            }
            while(fwd != _fwd){
                this->turn('C');
            }
        }
};

int main(){
    int a,b,c,e,d,f; cin>>a>>b>>c>>d>>e>>f;
    Dice dice = Dice(a,b,c,d,e,f);
    int N; cin>>N;
    REP(i,N){
        int x,y; cin>>x>>y;
        dice.set(x,y);
        cout << dice.rgt << "\n";
    }
    
}
