/////////////////////////////////////////////////////////
//
//  ~/Izumi_Chiharu/c/temp.cpp file
//  Last Updated: 2018-06-17 ...Maybe
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
#define coutYN(a) cout<<(a?"Yes":"No")<<endl;
#define coutyn(a) cout<<(a?"yes":"no")<<endl;

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

struct Dice{

  int a[6];
  int _uf2r[6][6];
  unordered_map <int,int> x;

  Dice(){

    for(int i=0;i<6;i++){

      a[i]=-1;
      for(int j=0;j<6;j++) _uf2r[i][j]=-1;

    }

    _uf2r[0][2]=4;
    _uf2r[0][4]=3;
    _uf2r[0][3]=1;
    _uf2r[0][1]=2;

    _uf2r[1][2]=0;
    _uf2r[1][0]=3;
    _uf2r[1][3]=5;
    _uf2r[1][5]=2;

    _uf2r[2][0]=1;
    _uf2r[2][1]=5;
    _uf2r[2][5]=4;
    _uf2r[2][4]=0;

    _uf2r[3][0]=4;
    _uf2r[3][4]=5;
    _uf2r[3][5]=1;
    _uf2r[3][1]=0;

    _uf2r[4][0]=2;
    _uf2r[4][2]=5;
    _uf2r[4][5]=3;
    _uf2r[4][3]=0;

    _uf2r[5][1]=3;
    _uf2r[5][3]=4;
    _uf2r[5][4]=2;
    _uf2r[5][2]=1;

  }

private:

  void n(){

    int t=a[0];
    a[0]=a[1];
    a[1]=a[5];
    a[5]=a[4];
    a[4]=t;

  }

  void s(){

    for(int i=0;i<3;i++) n();

  }

  void e(){

    int t=a[0];
    a[0]=a[3];
    a[3]=a[5];
    a[5]=a[2];
    a[2]=t;

  }

  void w(){

    for(int i=0;i<3;i++) e();

  }

public:

  void roll(char c){

    if(c=='N') n();
    else if(c=='S') s();
    else if(c=='E') e();
    else if(c=='W') w();

  }

  void make_x(){

    for(int i=0;i<6;i++) x[a[i]]=i;

  }

  int uf2r(int U,int F){

    int u=x[U],f=x[F];

    return a[_uf2r[u][f]];

  }

  int top(){

    return a[0];

  }

};

signed main(){

  Arithmetic Exception;

  Dice d;
  REP(i,6) cin>>d.a[i];

  d.make_x();

  int q;
  cin>>q;

  REP(i,q){

    int u,f;
    cin>>u>>f;

    cout<<d.uf2r(u,f)<<endl;

  }

  return 0;

}
