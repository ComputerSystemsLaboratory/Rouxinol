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
vector<int> c(contest_num+1,0), schedule;
vector<vector<int>> s;
vector<set<int>> last(contest_num+1);

void input(){
    cin>>d;
    s.resize(d+1);
    rep(i,d+1){
        s[i].resize(contest_num+1);
    }
    // rep(i,contest_num+1)last[i].resize(d+1,0);
    rep(i,26)cin>>c[i+1];
    rep(i,d)rep(j,contest_num)cin>>s[i+1][j+1];
}

void output(vector<int> &ans){
    rep(i,d)cout<<ans[i+1]<<endl;
}

int max_lower_than_x(set<int> &st, int x){
    int res=0;
    for(auto tmp: st)if(tmp<=x)res=max(res,tmp);
    return res;
}

int min_upper_than_x(set<int> &st, int x){
    int res=d+1;
    for(auto tmp: st)if(tmp>=x)res=min(res,tmp);
    return res;
}

//b  AC
vector<int> calc_score(vector<int> &a){
    vector<int> score(d+1);
    int res=0;
    repi(day,1,d+1){
        int current_contest = a[day];
        last[current_contest].insert(day);

        res+=s[day][current_contest];
        rep(i,contest_num){
            res -= c[i+1] * (day-max_lower_than_x(last[i+1], day));
        }
        score[day] = res;
    }
    return score;
}

//c
int change_query(int score, int day, int before, int after){
    int res = score;

    int before_prev = max_lower_than_x(last[before], day-1);
    int before_next = min_upper_than_x(last[before],day+1);

    int after_prev = max_lower_than_x(last[after], day-1);
    int after_next = min_upper_than_x(last[after], day+1);
    
    res -= (day-before_prev) * (before_next-day) * c[before];
    res -= s[day][before];

    res += (day-after_prev) * (after_next - day ) * c[after];
    res += s[day][after];

    return res;
}

int swap_query(int day1, int day2, vector<int> &schedule){
    int contest1 = schedule[day1], contest2=schedule[day2];
    vector<int> schedule_next = schedule;
    schedule_next[day2] = contest1;
    schedule_next[day1] = contest2;

    int res = calc_score(schedule_next)[d];

    return res;
}

vector<int> random_schedule(){
    uint seed = 0;
    mt19937 engine(seed);
    uniform_int_distribution<> dist(1,contest_num);

    vector<int> res(d+1,0);
    rep(i,d){
        res[i+1] = dist(engine);
    }
    return res;
}

vector<int> problem_b(){
    vector<int> v(d+1);
    rep(i,d)cin>>v[i+1];
    return v;
}


int main()
{
    input();
    rep(i,contest_num+1)last[i].insert(0), last[i].insert(d+1);
    //schedule = random_schedule();

    schedule = problem_b();

    vector<int> days_score = calc_score(schedule);

    rep(i,d)cout<<days_score[i+1]<<endl;
    return 0;

    int score = days_score[d];

    chrono::system_clock::time_point start = chrono::system_clock::now();
    chrono::milliseconds time_limit{1980};

    uint seed=0;
    mt19937 engine_day(seed), engine_contest(seed), engine_other(seed);
    uniform_int_distribution<> random_day(1,d), random_contest(1,contest_num);
    uniform_real_distribution<> random_choice(0.0, 1.0);

    while(1){
        auto now = chrono::system_clock::now();
        if(chrono::duration_cast<chrono::milliseconds>(now-start)>time_limit) break;

        if(random_choice(engine_other) < 0.5){
            // 1点更新
            int target_day = random_day(engine_day);
            int before = schedule[target_day];
            int after = random_contest(engine_contest);
            int score_next=change_query(score,target_day,before,after);
            if(score < score_next){
                score = score_next;
                last[before].erase(target_day);
                last[after].insert(target_day);
                schedule[target_day]=after;
            }
        }else{
            // 2点交換
            int target_day1 = random_day(engine_day);
            if(target_day1==d)continue;
            uniform_int_distribution<> random_day2(target_day1+1, min(target_day1+16, d));
            int target_day2 = random_day2(engine_other);

            int score_next = swap_query(target_day1, target_day2, schedule);
            if(score < score_next){
                score = score_next;

                last[schedule[target_day1]].erase(target_day1);
                last[schedule[target_day1]].insert(target_day2);

                last[schedule[target_day2]].erase(target_day2);
                last[schedule[target_day2]].insert(target_day1);


                int tmp = schedule[target_day1];
                schedule[target_day1] = schedule[target_day2];
                schedule[target_day2] = tmp;
            }
        }
    }

    output(schedule);

    //cout<<calc_score(schedule)[d]<<endl;

	return 0;
}