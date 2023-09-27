#include <bits/stdc++.h>
using namespace std;

#define rep(i,x,y) for(int i=(x);i<(y);++i)
#define mp(a,b) make_pair((a),(b))
#define debug(x) #x << "=" << (x)
 
#ifdef DEBUG
#define _GLIBCXX_DEBUG
#define dump(x) std::cerr << debug(x) << " (L:" << __LINE__ << ")" << std::endl
#else
#define dump(x)
#endif

typedef long long int ll;
typedef pair<int,int> pii;
//template<typename T> using vec=std::vector<T>;

const int INF=1<<30;
const long long int INF_=1LL<<58;
const double EPS=1e-9;
const int dx[]={1,0,-1,0},dy[]={0,1,0,-1};

template <typename T> ostream &operator<<(ostream &os, const vector<T> &vec){
	os << "[";
	for (const auto &v : vec) {
		os << v << ",";
	}
	os << "]";
	return os;
}

struct S{
	int h,w,l;

	S(int h,int w):h(h),w(w){
		l=h*h+w*w;
	}

	bool operator<(const S &s)const{
		if(l==s.l) return h<s.h;
		return l<s.l;
	}
};

void Solve(){
	vector<S> rects;
	rep(i,1,151) rep(j,i+1,151) rects.push_back(S{i,j});
	sort(rects.begin(),rects.end());

	int h,w;
	while(true){
		cin >> h >> w;
		if(h==0&&w==0) break;

		auto it=++lower_bound(rects.begin(),rects.end(),S{h,w});
		cout << it->h << ' ' << it->w << endl;
	}
}

int main(){
	std::ios::sync_with_stdio(false);
	std::cin.tie(0);
	Solve();
	return 0;
}