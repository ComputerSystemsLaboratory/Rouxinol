#include <bits/stdc++.h>
#define ll long long
#define INF 1000000005
#define MOD 1000000007
#define EPS 1e-10
#define rep(i,n) for(int i=0;i<(int)n;++i)
#define each(a, b) for(auto (a): (b))
#define all(v) (v).begin(),(v).end()
#define fi first
#define se second
#define pb push_back
#define show(x) cout <<#x<<" = "<<(x)<<endl
#define spair(p) cout <<#p<<": "<<p.fi<<" "<<p.se<<endl
#define svec(v) cout<<#v<<":";rep(i,v.size())cout<<" "<<v[i];cout<<endl
#define sset(s) cout<<#s<<":";each(i,s)cout <<" "<<i;cout<<endl

using namespace std;

typedef pair<int,int>P;

const int MAX_N = 1000000;

int prime[MAX_N];
bool is_prime[MAX_N];

int sieve(int n)
{
	int p = 0;
	for(int i=0;i<=n;i++){
		is_prime[i] = true;
	}
	is_prime[0] = is_prime[1] = false;
	for(int i=2;i<=n;i++){
		if(is_prime[i]){
			prime[p++] = i;
			for(int j=2*i;j<=n;j+=i){
				is_prime[j] = false;
			}
		}
	}
	return p;
}


int main()
{
    sieve(1000000);
    while(1){
        int a,d,n;
        cin >> a >> d >> n;
        if(n == 0){
            break;
        }
        int cnt = 0;
        int ans = a;
        while(1){
            if(is_prime[ans]){
                cnt++;
                if(cnt == n){
                    cout << ans << "\n";
                    break;
                }
            }
            ans += d;
        }
    }
    return 0;
}