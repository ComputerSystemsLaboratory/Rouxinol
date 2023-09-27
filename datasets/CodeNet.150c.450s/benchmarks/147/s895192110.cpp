#include <bits/stdc++.h>

using namespace std;

#define endl '\n'
#define cw(x) cout << (x) << endl
#define cww(x,y) cout << (x) << ' ' << y << endl
#define cwa(x) for(auto a:x) cout << a << ' ';cout << endl
#define all(v) (v).begin(),(v).end()
#define pb push_back
#define fi first
#define se second

typedef long long ll;
typedef pair<int,int> pi;
typedef vector<int> vi;
typedef unordered_set<int> usi;
typedef vector<pi> vpi;

int a[10050],x,y,z,v,n;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

    while(x++<=105){
        for(y=0;y++<=105;){
            for(z=0;z++<=105;){
                if((v=x*x+y*y+z*z+x*y+y*z+z*x) < 10050){
                    a[v]++;
                }
            }
        }
    }
    for(cin >> n,v=0;v<n;v++) cout << a[v+1] << endl;

    return 0;
}
