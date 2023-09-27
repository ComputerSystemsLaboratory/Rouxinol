#include <bits/stdc++.h>
using namespace std;
/*{{{*/  //template
#define rep(i,n) for(int i=0;i<n;i++)
#define INF 1<<29
#define LINF LLONG_MAX/3
#define mp make_pair
#define pb push_back
#define EB emplace_back
#define fi first
#define se second
#define all(v) (v).begin(),(v).end()
#define sz(x) (int)(x).size()
#define debug(x) cerr<<#x<<":"<<x<<endl
#define debug2(x,y) cerr<<#x<<","<<#y":"<<x<<","<<y<<endl
//struct fin{ fin(){ cin.tie(0); ios::sync_with_stdio(false); } } fin_;
struct Double{ double d; explicit Double(double x) : d(x){} };
ostream& operator<<(ostream& os,const Double x){ os << fixed << setprecision(20) << x.d; return os; }
template<typename T> ostream& operator<<(ostream& os,const vector<T>& vec){ os << "["; for(const auto& v : vec){ os << v << ","; } os << "]"; return os; }
template<typename T,typename U> ostream& operator<<(ostream& os,const pair<T,U>& p){ os << "(" << p.first << ","<< p.second <<")"; return os; }
typedef long long ll;
typedef unsigned long long ull;
typedef pair<int,int> pii;
typedef vector<int> vi;
typedef vector<vi> vvi;
ll gcd(ll a,ll b){ if(b==0) return a; else return gcd(b,a%b); }
constexpr double eps = 1e-14; 
constexpr ll mod = 1e9+7;
const int dx[]={1,0,-1,0} ,dy[] = {0,1,0,-1};
/*}}}*/

struct card{
    int t;
    char c;
    int idx;
};

int part(vector<card> &A,int p,int r){
    int x = A[r].t;
    int i = p-1;
    for(int j=p;j<r;j++){
        if(A[j].t<=x){
            i++;
            swap(A[i],A[j]);
        }
    }
    swap(A[i+1],A[r]);
    return i+1;
}

void quicksort(vector<card> &A,int p,int r){
    if(p<r){
        int q = part(A,p,r);
        quicksort(A,p,q-1);
        quicksort(A,q+1,r);
    }
}

int main(){
    int N;
    cin >> N;
    vector<card> A(N);
    auto save = A;
    rep(i,N){
        cin >> A[i].c >> A[i].t;
        A[i].idx = i;
    }

    quicksort(A,0,N-1);

    [=](){
        for(int i=0;i<N-1;i++){
            if(A[i].t==A[i+1].t){
                if(A[i].idx > A[i+1].idx){
                    cout << "Not stable" << endl;
                    return;
                }
            }
        }
        cout << "Stable" << endl;
        return;
    }();

    rep(i,N){
        cout << A[i].c << " " << A[i].t << endl;
    }
}