#include<iostream>
#include<algorithm>
#include<string>
#include<vector>
#include<cmath>
#include<numeric>
#include<map>

#define REP(i, a) for(int i=0;i<(int)a;++i)
#define ALL(a) (a).begin(),(a).end()
#define V vector
#define INF 1145141919

template<class T, size_t N>
size_t countof(const T (&array)[N]) { return N; }

typedef long long ll;
typedef long double ld;

using namespace std;

void solver() {
    int n, m;
    cin >> n >> m;
    V<V<int>> left(n,V<int>(m));
    V<int> right(m);
    V<int> ans(n);
    REP(i,n){
        REP(j,m){
            int t;
            cin>>t;
            left[i][j]=t;
        }
    }
    REP(i,m){
        int t;
        cin>>t;
        right[i]=t;
    }
    REP(i,n){
        int sum=0;
        REP(j,m){
            sum+=left[i][j]*right[j];
        }
        ans[i]=sum;
    }
    REP(i,n){
        cout<<ans[i]<<endl;
    }

}

int main() {
    solver();
    return 0;
}
