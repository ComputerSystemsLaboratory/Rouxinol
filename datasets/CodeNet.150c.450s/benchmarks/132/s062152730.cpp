#include <iostream>

using namespace std;

#define rep(i, n) REP(i, 0, n)
#define REP(i,k,n) for(int i = k; i < n; i++)
#define mmax(start, end) *max_element(start, end)
#define mmin(start, end) *min_element(start, end)
#define argmax max_element
#define argmin min_element
#define push push_back
#define pop pop_back
#define ALL(x) (x).begin(), (x).end()

typedef long long ll;
typedef string str;

int dx[8] = {-1, -1, -1, 0, 0, 1, 1, 1};
int dy[8] = {-1, 0, 1, -1, 1, -1, 0, 1};

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n,p;

    while(cin >> n >> p,n){
        int a[55] = {};
        rep(i,n){
            a[i] = p/n + ((p%n>i)? 1 : 0);
        }
        // rep(i,n) cout << a[i] << " ";
        // cout << endl;
        int t = p%n;
        int owan = 0;
        int ans = -1;
        while(true){
            if(owan>0) {
                owan -=1;
                a[t]+=1;
                if(a[t]>=p){
                    ans = t;
                    break;
                }
            }
            else if(a[t]>0){
                owan = a[t];
                a[t] = 0;
            }
            t = (t+1)%n;
        }
        cout << ans << endl;
    }
    return 0;
}

