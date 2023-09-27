#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef pair<int,int> pii;

typedef int _loop_int;
#define REP(i,n) for(_loop_int i=0;i<(_loop_int)(n);++i)
#define FOR(i,a,b) for(_loop_int i=(_loop_int)(a);i<(_loop_int)(b);++i)
#define FORR(i,a,b) for(_loop_int i=(_loop_int)(b)-1;i>=(_loop_int)(a);--i)

#define DEBUG(x) cout<<#x<<": "<<x<<endl
#define DEBUG2(x,y) cout<<#x<<": "<<x<<" "<<#y<<": "<<y<<endl
#define DEBUG_VEC(v) cout<<#v<<":";REP(i,v.size())cout<<" "<<v[i];cout<<endl
#define ALL(a) (a).begin(),(a).end()

const ll MOD = 1000000007ll;
#define FIX(a) ((a)%MOD+MOD)%MOD

bool cmp(const tuple<int,int,ll>& i, const tuple<int,int,ll>& j) {
    return get<0>(i) < get<0>(j);
}

string ltrim(string s){return s.substr(s.find_first_not_of(" "));}
string rtrim(string s){return s.substr(0, s.find_last_not_of(" ")+1);}
string trim(string s){return rtrim(ltrim(s));}

int main() {
    ios::sync_with_stdio(false); cin.tie(0);
    const int GROUND = 20000;
    const int SZ = GROUND*2+1;
    //vi csum[SZ];
    vi down[SZ], up[SZ];
    string s;
    cin>>s;
    int now = GROUND; 
    int flg = false;
    REP(i,s.size()){
        switch (s[i])
        {
        case '\\': 
            //csum[++now].emplace_back(i);
            down[++now].emplace_back(i);
            flg = true;
            break;
        case '/':
            //--now;
            
            //csum[now--].emplace_back(i);
            
            if(!down[now].empty()){
                up[now].emplace_back(i);
            }
            now--;
            break;
        }
    }

    ll ans=0;
    //queue<tuple<int,int,ll>> areas;
    vector<tuple<int,int,ll>> areas;
    FORR(i,0,SZ){
        FOR(j,0, min(down[i].size(), up[i].size())){
            //DEBUG2( up[i][j],down[i][j]);
            int left=down[i][j];
            int right=up[i][j];
            ll area = up[i][j]-down[i][j];
            ans += area;
            areas.emplace_back(make_tuple(left,right,area));
        }
    }

    sort(ALL(areas),cmp);

    int tmp=0;
    vl ans2;
    REP(i,areas.size()){
        if(tmp < get<1>(areas[i])){
            tmp = get<1>(areas[i]);
            ans2.emplace_back(get<2>(areas[i]));
        }else{
            ans2[ans2.size()-1] += get<2>(areas[i]);
        }
        //DEBUG2(get<0>(areas[i]), get<1>(areas[i]));
    }

    string ans3 = to_string(ans2.size()) + " ";
    REP(i,ans2.size()){
        ans3 += to_string(ans2[i]) + " ";
    }

    ans3 = rtrim(ans3);
    cout<<ans<<endl;
    cout << ans3 << endl;
    return 0;
}
