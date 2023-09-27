#include <bits/stdc++.h>
#define ll long long
#define INF 1000000005
#define MOD 1000000007
#define EPS 1e-10
#define rep(i,n) for(int i=0;i<(int)n;++i)
#define all(v) (v).begin(),(v).end()

using namespace std;

typedef pair<int,int>P;

const int MAX_N = 51;

int a[MAX_N];

int main()
{
    while(1){
        int n,p;
        cin >> n >> p;
        if(n == 0){
            break;
        }
        rep(i,n){
            a[i] = 0;
        }
        int np = p;
        bool flag = false;
        int ans;
        while(1){
            rep(i,n){
                if(np == 0){
                    np = a[i];
                    a[i] = 0;
                }else if(np == 1){
                    a[i]++;
                    np--;
                    if(a[i] == p){
                        flag = true;
                        ans = i;
                        break;
                    }
                }else{
                    a[i]++;
                    np--;
                }
            }
            if(flag){
                break;
            }
        }
        cout << ans << "\n";
    }
	return 0;
}