#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<ll,ll> PP;
//#define MOD 1000000007
//#define MOD 998244353
#define INF 1145141919810893364
//#define INF 810114514
#define PI 3.141592653589
#define setdouble setprecision
#define REP(i,n) for(int i=0;i<(n);++i)
#define OREP(i,n) for(int i=1;i<=(n);++i)
#define RREP(i,n) for(int i=(n)-1;i>=0;--i)
#define GOODBYE do { cout << "0" << endl; return 0; } while (false)
#define MM <<" "<<
#define Endl endl
#define debug false
#define debug2 false


int main(void){
    int T;
    cin >> T;
    REP(_,T){
        long long N,a;
        vector<ll> A;
        string S;
        cin >> N;
        REP(i,N){cin >> a;A.push_back(a);}
        cin >> S;
        
        vector<ll> B;
        
        bool stop = false;
        RREP(i,N){
            ll e = A[i];
            REP(j,B.size()){
                e = min(e,e^B[j]);
            }
            if(e){
                B.push_back(e);
            }
            
            if(e && S[i]=='1'){
                cout << 1 << endl;
                stop = true;
                break;
            }
            
        }
        if(stop)continue;
        cout << 0 << endl;
    }
    
    
    
    return 0;
}

