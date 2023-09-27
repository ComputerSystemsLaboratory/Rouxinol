#define _GLIBCXX_DEBUG
#define _USE_MATH_DEFINES
#include <bits/stdc++.h>
using namespace std; using ll = long long; using pii = pair<int, int>; using pll = pair<ll, ll>; using pdd = pair<double, double>; using pss = pair<string, string>; using pcc = pair<char, char>; using pbb = pair<bool, bool>; using pil = pair<int, ll>; using pli = pair<ll, int>; using ti3 = tuple<int, int, int>; using tl3 = tuple<ll, ll, ll>; using td3 = tuple<double, double, double>; using ts3 = tuple<string, string, string>; using tc3 = tuple<char, char, char>; using tb3 = tuple<bool, bool, bool>; using ti4 = tuple<int, int, int, int>; using tl4 = tuple<ll, ll, ll, ll>; using td4 = tuple<double, double, double, double>; using ts4 = tuple<string, string, string, string>; using tc4 = tuple<char, char, char, char>; using tb4 = tuple<bool, bool, bool, bool>; using vi = vector<int>; using vl = vector<ll>; using vd = vector<double>; using vs = vector<string>; using vc = vector<char>; using vb = vector<bool>; using vvi = vector<vi>; using vvl = vector<vl>; using vvd = vector<vd>; using vvs = vector<vs>; using vvc = vector<vc>; using vvb = vector<vb>; using vvvi = vector<vvi>; using vvvl = vector<vvl>; using vvvd = vector<vvd>; using vvvs = vector<vvs>; using vvvc = vector<vvc>; using vvvb = vector<vvb>; using vpii = vector<pii>; using vpll = vector<pll>; using vpdd = vector<pdd>; using vpss = vector<pss>; using vpcc = vector<pcc>; using vpbb = vector<pbb>; using vpil = vector<pil>; using vpli = vector<pli>; using vti3 = vector<ti3>; using vtl3 = vector<tl3>; using vtd3 = vector<td3>; using vts3 = vector<ts3>; using vtc3 = vector<tc3>; using vtb3 = vector<tb3>; using vti4 = vector<ti4>; using vtl4 = vector<tl4>; using vtd4 = vector<td4>; using vts4 = vector<ts4>; using vtc4 = vector<tc4>; using vtb4 = vector<tb4>; using mii = map<int, int>; using mll = map<ll, ll>; using msi = map<string, int>; using mci = map<char, int>; using mil = map<int, ll>; using mli = map<ll, int>; using si = set<int>; using sl = set<ll>; using sd = set<double>; using ss = set<string>; using sc = set<char>; using sb = set<bool>; using spii = set<pii>; using spll = set<pll>; using spdd = set<pdd>; using spss = set<pss>; using spcc = set<pcc>; using spbb = set<pbb>; using spil = set<pil>; using spli = set<pli>; using sti3 = set<ti3>; using stl3 = set<tl3>; using std3 = set<td3>; using sts3 = set<ts3>; using stc3 = set<tc3>; using stb3 = set<tb3>;
#define rep0(TMS) for (int CNT = 0; CNT < (int)(TMS); CNT++)
#define rep(CNT, GOAL) for (int CNT = 0; CNT < (int)(GOAL); CNT++)
#define rep2(CNT, START, GOAL) for (int CNT = (int)(START); CNT < (int)(GOAL); CNT++)
#define rep3(CNT, START, GOAL) for (int CNT = (int)(START); CNT > (int)(GOAL); CNT--)
#define all(CONT) begin(CONT), end(CONT)
#define fr1(CONT) next(begin(CONT)), end(CONT)
#define itrep(ITR, CONT) for (auto ITR = begin(CONT); ITR != end(CONT); ITR++)
#define itrep1(ITR, CONT) for (auto ITR = next(begin(CONT)); ITR != end(CONT); ITR++)
#define maxel(CONT) *max_element(all(CONT))
#define minel(CONT) *min_element(all(CONT))
template <typename T> bool chmax(T &a, const T &b) { if (a < b) { a = b; return true; } return false; }
template <typename T> bool chmin(T &a, const T &b) { if (a > b) { a = b; return true; } return false; }
template <typename T> T sum(const vector<T> &VEC) { return accumulate(all(VEC), 0.0); }
template <typename T> vector<T> acm(const vector<T> &VEC) { vector<T> RES(VEC.size() + 1); rep(CNT, VEC.size()) RES[CNT + 1] = RES[CNT] + VEC[CNT]; return RES; }
template <typename T> void fil(vector<T> &VEC, const int NUM, const T &VAL) { VEC.assign(NUM, VAL); }
template <typename T> void fil(vector<T> &VEC, const int NUM) { VEC.assign(NUM, 0.0); }
template <typename T> void fil(vector<vector<T>> &VV, const int RNUM, const int CNUM, const T &VAL) { fil(VV, RNUM, vector<T>()); rep(CNT, RNUM) fil(VV[CNT], CNUM, VAL); }
template <typename T> void fil(vector<vector<T>> &VV, const int RNUM, const int CNUM) { fil(VV, RNUM, vector<T>()); rep(CNT, RNUM) fil(VV[CNT], CNUM); }
template <typename T> void fil(vector<vector<T>> &VV, const int RNUM) { fil(VV, RNUM, vector<T>()); }
void prec(const int &DIG) { cerr << fixed << setprecision(DIG); cout << fixed << setprecision(DIG); }
template <typename T> void COUT(const T &ELEM) { cout << ELEM; }
template <typename T> void pout(const T &ELEM) { COUT(ELEM); cout << " "; }
template <typename T, typename ...Ts> void pout(const T &FIRST, const Ts &...REST) { pout(FIRST); pout(REST...); }
template <typename T> void print(T ELEM) { COUT(ELEM); cout << "\n"; }
template <typename T, typename ...Ts> void print(const T &FIRST, const Ts &...REST) { print(FIRST); print(REST...); }
void CERR() { cerr << "\n"; }
template <typename T> void CERR(const T &ELEM) { cerr << ELEM; }
template <typename T, typename ...Ts> void CERR(const T &FIRST, const Ts &...REST) { CERR(FIRST); cerr << ", "; CERR(REST...); }
template <typename T1, typename T2> void CERR(const pair<T1, T2> &PAIR) { cerr << "("; CERR(PAIR.first); cerr << ", "; CERR(PAIR.second); cerr << ")"; }
template <typename T1, typename T2, typename T3> void CERR(const tuple<T1, T2, T3> &TUP3) { cerr << "("; CERR(get<0>(TUP3)); cerr << ", "; CERR(get<1>(TUP3)); cerr << ", "; CERR(get<2>(TUP3)); cerr << ")"; }
template <typename T1, typename T2, typename T3, typename T4> void CERR(const tuple<T1, T2, T3, T4> &TUP4) { cerr << "("; CERR(get<0>(TUP4)); cerr << ", "; CERR(get<1>(TUP4)); cerr << ", "; CERR(get<2>(TUP4)); cerr << ", "; CERR(get<3>(TUP4)); cerr << ")"; }
template <typename T> void CERR(const vector<T> &VEC) { cerr << "{ "; itrep(ITR, VEC) { CERR(*ITR); cerr << ", "; } cerr << "}"; }
template <typename T> void CERR1(const vector<T> &VEC) { cerr << "{ "; itrep1(ITR, VEC) { CERR(*ITR); cerr << ", "; } cerr << "}"; }
template <typename T> void CERR(const set<T> &SET) { cerr << "{ "; itrep(ITR, SET) { CERR(*ITR); cerr << ", "; } cerr << "}"; }
template <typename T1, typename T2> void CERR(const map<T1, T2> &MAP) { cerr << "{ "; itrep(ITR, MAP) { CERR(*ITR); cerr << ", "; } cerr << "}"; }
#define db(OBJ) cerr << #OBJ << ": "; CERR(OBJ); cerr << ", "
#define dbl(OBJ) cerr << #OBJ << ": "; CERR(OBJ); cerr << "\n"
#define db1(OBJ) cerr << #OBJ << ": "; CERR1(OBJ); cerr << "\n"
#define dbs(...) cerr << "(" << #__VA_ARGS__ << "): ("; CERR(__VA_ARGS__); cerr << ")\n"
#define dbvv(VV) cerr << #VV << ": {\n"; rep(CNT, VV.size()) { cerr << #VV << "[" << CNT << "]: "; CERR(VV[CNT]); cerr << ",\n"; } cerr << "}\n"
#define db01(VV) cerr << #VV << ": {\n"; rep(CNT, VV.size()) { cerr << #VV << "[" << CNT << "]: "; CERR1(VV[CNT]); cerr << ",\n"; } cerr << "}\n"
#define db10(VV) cerr << #VV << ": {\n"; rep2(CNT, 1, VV.size()) { cerr << #VV << "[" << CNT << "]: "; CERR(VV[CNT]); cerr << ",\n"; } cerr << "}\n"
#define db11(VV) cerr << #VV << ": {\n"; rep2(CNT, 1, VV.size()) { cerr << #VV << "[" << CNT << "]: "; CERR1(VV[CNT]); cerr << ",\n"; } cerr << "}\n"
#define YN(FLG) cout << (FLG ? "YES" : "NO") << "\n"
#define Yn(FLG) cout << (FLG ? "Yes" : "No") << "\n"
#define yn(FLG) cout << (FLG ? "yes" : "no") << "\n"
#define pcase(NUM) cout << "Case #" << NUM << ":" << " "
#define pcasel(NUM) cout << "Case #" << NUM << ":" << "\n"
// const ll INF = 1'000'000'000'000'000'007;
const int INF = 1'000'000'007;
const ll MOD = 1'000'000'007; // 998'244'353;

int solve() { // x=0とできるなら0
	int N; cin >> N;
	vl A(N); rep(i, N) cin >> A[i];
	string S; cin >> S;
	vector<ll> dp;
	rep3(i, N - 1, -1) {
		if (S[i] == '0') {
			sort(all(dp), greater<ll>());
			rep(j, dp.size()) chmin(A[i], A[i] ^ dp[j]);
			if (A[i] > 0) dp.push_back(A[i]);
		} else {
			sort(all(dp), greater<ll>());
			rep(j, dp.size()) chmin(A[i], A[i] ^ dp[j]);
			if (A[i] > 0) return 1; // dpの要素で0にできなかった場合
		}
	}
	return 0;
}

int main() {
	int T; cin >> T;
	while(T--) cout << solve() << endl;
}