/////////////////////////////////////////////////////////
//
//  ~/Izumi_Chiharu/c/temp.cpp file
//  Last Updated: 2018-07-12 ...Maybe
//
//    I hope you adding this code to the setting file
//    alias g++='g++ -std=c++1y -DDEBUG_LOCAL'
//
//  My sweet heart Chiharu Izumi
//
/////////////////////////////////////////////////////////

#include <bits/stdc++.h>

using namespace std;

void print_Qbey(){cout<<
"           H                                           M#5J~d              "  <<endl<<
"         Hm.?WMM                                   MMB^ .Z  d              "  <<endl<<
"         MZS.` ?7WMM                             M#=`` (!`` d              "  <<endl<<
"         HP?X,```  ?TMM                       MMY! ` .d: `` d              "  <<endl<<
"         Hb;<U,`````` (TMM                 HM ^ ``` .V>_` `.W              "  <<endl<<
"           ;><?n. `` ````?WHHMMHHHMMMMMM MMY```` ` (3<< `` .M              "  <<endl<<
"         HN<>>>?W,`` `` ` (77!~`  ```~!?7'``` `` .d>>><``  .M              "  <<endl<<
"          M2<>>>>?n.`` `` `` `` ``` `` ```` `` `.X>1++< `` (H              "  <<endl<<
"          MK<>>>>+?S.``` `` ```` ``` ``` `` `` .Z``` ?4-.` jM              "  <<endl<<
"           N2><+d=(Y^ `` `` ` ` ` ` `` `` `` `` T~.`````?=(dM              "  <<endl<<
"           MR;JY~`~``` `` `` ``` ``` `` `` `` ``` u, `` `` 7M              "  <<endl<<
"            NV!_`` `` `` ```` ``` `` `` `` ``` ``` C& ` ```` TMM           "  <<endl<<
"           MY.(-`` ` `` ``  `` ` `` `` `` `` ``  `` (n ` ` ``` 7M          "  <<endl<<
"         HMD-(D`` ``` `` ``` `` `` `` `` `` ` ``` ```(n ` `` `` (WM        "  <<endl<<
"         M _(d```` `` ``` ``` ``` `` `` `` ``` ``` `` .b.`` `` ```?MH      "  <<endl<<
"        MM!_(%` `` `` `` ` ` `` `` `` ``` `` `` ` `` ` (l`` ``````` TMH    "  <<endl<<
"       H#>__d:`` .JXVS, ``` `` ` `` `` `.JXWH&.``` ```` O; `` ` ` `` -WM   "  <<endl<<
"       M%.~(k ``.HXH[ dr ```` ``` `` `` dWWN- u. `` ``` ,M,``` ``` ``` ?MMM"  <<endl<<
"      MF_~~($`` .WXMMWX$ ` ``` `` ``` ` dXM HHK````` `` ,HN-``````````.-=jg"  <<endl<<
"MMMMHMY.~~~(R ``` 799Y!```` ``` `` `` `` ?UUUY!`` ````` (M N, `` ```.Z3J=``"  <<endl<<
"gaJJdD.~~::_X|`````````````` `````` `` ` ``` ````` ``` .H  MN,``` .Yiv! ```"  <<endl<<
"   MD_:~:~:~(T.`````````` ``` ` ` ````` ``` ``` ``````.M     N, .Ziv!`` ._~"  <<endl<<
" MM'_:::::::~(N+.`````````` .`.(.` .` ``` ```` ```` .dM       NZ1v! .-_~~``"  <<endl<<
" #:(::::::::~(HMNa..  ``````_?!`?7! `` ````  ...-(+7WMM     HM3(b _:<``..`."  <<endl<<
"=_;::::::::<(H    MMHaJ--_--........-.__~~~~(&v7<~``` ?MM   M>gM9h,_......."  <<endl<<
";;;;;;;:;::(drWM          HHmgggg&gzOtOzz<<~~~~~_`` ``` ?MMMH+ggM Mm-......"  <<endl<<
"e<>>;>>;;><dMMJM                  Nc_~~~~~~~~~~_ ``  ` `` 7H&-...?THNe-_._("  <<endl<<
",4m+>>>>>>j MM(W                   N-~~~~~~~~:_`` ``` ` ``  ?7UHHqqHWHMm+__"  <<endl<<
"vX+vT4k&&dMMD!+M                   MR_~~~~~:_````` ```` ````````` ````  ?We"  <<endl<<
"???zTwiJ-(((JdM                    MK_~~~~:_``` ` ` ` `` ` ` ` ``` ```````?"  <<endl<<
"1uukgHM                            MH_~~~_``` `` ``` `` `` `` ` `` ` `  ```"  <<endl<<
"CugM                                N;~~:_ ` `` `` ``` `` ````` ``` ``` ` `"  <<endl<<
"H                                   M[~~~_4, `   ` `` `` ``  ``` `` `` ``` "  <<endl<<
"                                    Hb~~~~~?n  (: `` `` `` `` ` ` `` `` ```"  <<endl<<
"                                    Hb~~~~~~(4,J_ `` ```  ```` ``` `` `` ` "  <<endl<<
"                                     N-~~~~~~(MM_` `` ` (}  `` `` `` `` ```"  <<endl<<
"                                     Mr_~~~~~(HH: `` `` j!`` `` `` `` `` ``"  <<endl<<
"                                     Mb~~~~~~(WH:`` `` .Z `` `` `` ``` `` `"  <<endl<<
"                                      N:~~~~~(WM{ `` ` .H+.. `` `  .``` `` "  <<endl;}

#define fi first
#define se second
#define mp make_pair
#define pb push_back

//#define int long long

#define _overload3(_1,_2,_3,name,...) name
#define _REP(i,n) REAP(i,0,n)
#define REAP(i,a,b) for(int i=int(a);i<int(b);++i)
#define REP(...) _overload3(__VA_ARGS__,REAP,_REP,)(__VA_ARGS__)

#define _REPR(i,n) REAPR(i,n,0)
#define REAPR(i,a,b) for(int i=int(a-1);i>=int(b);--i)
#define REPR(...) _overload3(__VA_ARGS__,REAPR,_REPR,)(__VA_ARGS__)

#define ALL(a) a.begin(),a.end()
#define rALL(a) a.rbegin(),a.rend()

#define coutALL(a) {int loop_coutALL=0;for(auto e:a) cout<<(loop_coutALL++?" ":"")<<e; cout<<endl;}

#define coutYN(a) cout<<((a)?"YES":"NO")<<endl;
#define coutYn(a) cout<<((a)?"Yes":"No")<<endl;
#define coutyn(a) cout<<((a)?"yes":"no")<<endl;

#define pcnt __builtin_popcount
#define buli(x) __builtin_popcountll(x)

const int INF=1145141919;
const int MOD=(int)1e9+7;
const double EPS=1e-12;
const int dx[]={1,0,-1,0},dy[]={0,1,0,-1};
//const int dx[]={-1,-1,-1,0,1,1,1,0},dy[]={-1,0,1,1,1,0,-1,-1};

using vi=vector<int>;
using vvi=vector<vi>;
using vs=vector<string>;

typedef pair<int,int> pii;
typedef pair<int,string> pis;
typedef pair<string,int> psi;
typedef pair<string,string> pss;

typedef long long ll;

template<class T> ll upper(T n,T m){return (n+m-1)/m;};
template<class T> ll rounding(T n){return (long double)n+0.5;};

template<class T> bool inG(T x,T n){return 0<=x && 0<n;}
template<class T> bool outG(T x,T n){return x<0 || n<=x;}

inline int qp(int a,ll b){int ans=1;do{if(b&1)ans=1ll*ans*a;a=1ll*a*a;}while(b>>=1);return ans;}
inline int qp(int a,ll b,int mo){int ans=1;do{if(b&1)ans=1ll*ans*a%mo;a=1ll*a*a%mo;}while(b>>=1);return ans;}

struct Arithmetic{Arithmetic(){cin.tie(0);ios::sync_with_stdio(0);cout<<fixed<<setprecision(20);}};

//#define DEBUG_LOCAL

#ifdef DEBUG_LOCAL
template<typename T> void deb(T a){cerr<<"deb: "<<a<<"ですねぇ！"<<endl;}
#define debl {cerr<<"debug: "<<__LINE__<<"行目だよーんおほほ"<<endl;}
void what_cr(){cout<<__GCC_ATOMIC_CHAR16_T_LOCK_FREE<<" ←なんだろーこの数字？"<<endl;}
void t_t(){cout
    <<endl
    <<"------------------------"<<endl
    <<"| Presented by         |"<<" Compiled "<<__FILE__<<endl
    <<"| "<<__DATE__<<" "<<__TIME__<<" |"<<endl
    <<"|        Chiharu Izumi |"<<"      to get the AC :)"<<endl
    <<"------------------------"<<endl;
}
#else
template<typename T>void deb(T a){}
#define debl ;
void what_cr(){}void t_t(){}
#endif

signed main(){

  Arithmetic Exception;

  int n,m;
  cin>>n>>m;

  vi c(m);
  REP(i,m) cin>>c[i];

  int dp[70000];
  fill(dp,dp+70000,INF);
  dp[0]=0;

  REP(i,m)
    REP(j,n)
    dp[j+c[i]]=min(dp[j+c[i]],dp[j]+1);

  cout<<dp[n]<<endl;

  return 0;

}

