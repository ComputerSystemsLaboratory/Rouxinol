#include <bits/stdc++.h>
#include <sys/types.h>
#include <unistd.h>

#define _overload(_1,_2,_3,name,...) name
#define _rep(i,n) _range(i,0,n)
#define _range(i,a,b) for(int i=int(a);i<int(b);++i)
#define rep(...) _overload(__VA_ARGS__,_range,_rep,)(__VA_ARGS__)

#define _rrep(i,n) _rrange(i,n,0)
#define _rrange(i,a,b) for(int i=int(a)-1;i>=int(b);--i)
#define rrep(...) _overload(__VA_ARGS__,_rrange,_rrep,)(__VA_ARGS__)

#define _all(arg) begin(arg),end(arg)
#define uniq(arg) sort(_all(arg)),(arg).erase(unique(_all(arg)),end(arg))
#define getidx(ary,key) lower_bound(_all(ary),key)-begin(ary)
#define clr(a,b) memset((a),(b),sizeof(a))
#define bit(n) (1LL<<(n))
#define popcount(n) (__builtin_popcountll(n))

using namespace std;

template<class T>bool chmax(T &a, const T &b) { return (a<b)?(a=b,1):0;}
template<class T>bool chmin(T &a, const T &b) { return (b<a)?(a=b,1):0;}

using ll=long long;
using R=long double;
const R EPS=1e-9L; // [-1000,1000]->EPS=1e-8 [-10000,10000]->EPS=1e-7
inline int sgn(const R& r){return(r > EPS)-(r < -EPS);}
inline R sq(R x){return sqrt(max(x,0.0L));}

template<typename T> vector<T> make_vector(size_t sz){
	return vector<T>(sz);
}

template<typename T,typename... Ts> 
auto make_vector(size_t sz, Ts... ts){
	return vector<decltype(make_vector<T>(ts...))>(sz, make_vector<T>(ts...));
}

template<typename T,typename U,typename... V> 
typename enable_if<is_same<T, U>::value!=0>::type 
fill_value(U &u, const V... v){
	u=U(v...);
}

template<typename T,typename U,typename... V>
typename enable_if<is_same<T, U>::value==0>::type
fill_value(U &u, const V... v){
	for(auto &e:u){
		fill_value<T>(e,v...);
	}
}

const int dx[8]={1,0,-1,0,1,-1,-1,1};
const int dy[8]={0,1,0,-1,1,1,-1,-1};

const pid_t pid = getpid();
// Problem Specific Parameter:


const int CONTEST_TYPE = 26;
int D;
int c[CONTEST_TYPE], s[365][CONTEST_TYPE];

void input() {
	cin >> D;

	rep(i, CONTEST_TYPE) {
		cin >> c[i];
	}

	rep(i, D) rep(j, CONTEST_TYPE) {
		cin >> s[i][j];
	}
}

int score(const vector<int> &type) {
	const int DAY = type.size();
	vector<int> last(CONTEST_TYPE, 0);

	int ret = 0;
	rep(i, DAY) {
		const int day = i + 1;
		const int type_idx = type[i] - 1;

		ret += s[i][type_idx];
		last[type_idx] = day;

		rep(j, CONTEST_TYPE) {
			ret -= c[j] * max(day - last[j], 0);
		}
	}

	return ret;
}


int main(void){
	input();
	vector<int> t;
	rep(i, D) {
		int elem;
		cin >> elem;
		t.push_back(elem);
		cout << score(t) << endl;
	}
	return 0;
}