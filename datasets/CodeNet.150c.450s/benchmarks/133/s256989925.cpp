#include <bits/stdc++.h>

using namespace std;

typedef long long int ll;
typedef pair<int,int> P;

#define rep(i,n) for(int i=0;i<(n);++i)
#define repi(i,a,b) for(int i=int(a);i<(b);i++)
#define repr(i,b,a) for(int i=int(b);i>=(a);i--)
#define all(x) x.begin(),x.end()

const ll mod = 1e9+7;
const ll INF = 1e9;

ll gcd(ll a,ll b){return b?gcd(b,a%b):a;}
int dx[4]={1,0,-1,0};
int dy[4]={0,1,0,-1};
bool valid(int lx,int ux,int ly,int uy,int x,int y){
	return lx<=x&&x<ux&&ly<=y&&y<uy; 
}
ll power(ll x,ll p){
	if(p==0)return 1;
	ll res=power(x*x%mod,p/2);
	if(p%2==1)res=res*x%mod;
	return res;
}

int d,contest_num=26;
vector<int> c(contest_num);
vector<vector<int>> s;

void input(){
    cin>>d;
    s.resize(d);
    rep(i,d)s[i].resize(contest_num);
    rep(i,26)cin>>c[i];
    rep(i,d)rep(j,contest_num)cin>>s[i][j];
}

void output(vector<int> &ans){
    rep(i,d)cout<<ans[i]<<endl;
}

vector<int> calc_score(vector<int> &a){
    vector<int> last(26,0);
    vector<int> score(d);
    int res=0;
    rep(day,d){
        int current_contest = a[day];
        last[current_contest] = day+1;
        
        res+=s[day][current_contest];
        rep(i,contest_num){
            res -= c[i] * (day+1-last[i]);
        }
        score[day] = res;
    }
    return score;
}

int main()
{
    input();
    vector<int> v(d);
    rep(i,d)cin>>v[i];
    rep(i,d)v[i]--;

    vector<int> tmp = calc_score(v);

    rep(i,d)cout<<tmp[i]<<endl;
	return 0;
}