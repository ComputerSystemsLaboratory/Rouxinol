#include <bits/stdc++.h>
using namespace std;
using LL = long long int;
using ULL = unsigned long long int;
using D = double;
using LD = long double;
#define int LL
// #define double LD
template <typename T> using V = std::vector<T>;
using VI = V<int>;
using VS = V<std::string>;
using VVI = V<V<int>>;
using VVVI = V<V<V<int>>>;
using VD = V<double>;
using VVD = V<V<double>>;
#define VIIN(A) VI A(read()); for(auto&& e: A) { e = read(); }
#define VSIN(A) VS A(read()); for(auto&& e: A) { e = readS(); }
#define PB push_back
#define RSV reserve
#define EB emplace_back
#define ALL(A) std::begin(A), std::end(A)
#define SUM(A) std::accumulate(ALL(A), int(0))
#define SUMD(A) std::accumulate(ALL(A), double(0))
#define AVE(A) SUM(A)/(A).size()
#define AVED(A) SUMD(A)/(A).size()
#define MAX(A) *std::max_element(ALL(A))
#define MIN(A) *std::min_element(ALL(A))
#define SORT(A) std::sort(ALL(A))
#define SSORT(A) std::stable_sort(ALL(A))
#define SORTG(A) std::sort(ALL(A), std::greater<>())
#define REV(A) std::reverse(ALL(A))
#define UNQ(A) SORT(A); (A).erase(std::unique(ALL(A)), std::end(A))
#define UNQG(A) SORTG(A); (A).erase(std::unique(ALL(A)), std::end(A))
using CD = std::complex<double>;
template <typename T1, typename T2> using P = std::pair<T1, T2>;
template <typename T> using PI = P<int, T>;
using PII = PI<int>;
using PIS = PI<std::string>;
using PSI = P<std::string, int>;
#define MP std::make_pair
#define F first
#define S second
#define FOR(var,a,b)  for (auto var=(a); var<(b); ++var)
#define RFOR(var,a,b)  for (auto var=(b)-1; var!=(a); --var)
#define REP(var,n)  for (decltype(n) var=0; var<(n); ++var)
#define RREP(var,n)  for (auto var = n-1; var!=static_cast<decltype(var)>(-1); --var)
#define YES(A) ((A) ? "yes" : "no")
constexpr int kMOD = 1e9+7;
const double kPI = std::acos(-1);
struct Read {
	auto operator()(void) { int d; std::cin >> d; return d; }
}read;
struct ReadReal {
	auto operator()(void) { double d; std::cin >> d; return d; }
}readR;
struct ReadString {
	auto operator()(void) { std::string s; std::cin >> s; return s; }
}readS;
struct ReadEof {
	bool operator()(void) { return std::cin.eof(); }
}readEof;
struct Print {
	void operator()(void) { std::cout << " "; }
	void operator()(double lf) {
		std::cout << std::fixed << std::setprecision(8) << lf;
	}
	template <typename T> void operator()(T t) {
		std::cout << t;
	}
	template <typename T>
	void operator()(const std::complex<T> &c, const std::string &sep = " ") {
		Print()(c.real());
		Print()(sep);
		Print()(c.imag());
	}
	template <typename T1, typename T2>
	void operator()(const std::pair<T1, T2> &pair, const std::string &sep = " ") {
		Print()(pair.first);
		Print()(sep);
		Print()(pair.second);
	}
	template <typename T>
	void operator()(T begin, T end, const std::string &sep = " ") {
		if (begin == end) return;
		Print()(*begin);
		for(auto it = ++begin;  it != end; ++it) {
			Print()(sep);
			Print()(*it);
		}
	}
	template <typename T>
	void operator()(const std::vector<T> &v, const std::string &sep = " ") {
		Print()(std::begin(v), std::end(v), sep);
	}
	template <typename T>
	void operator()(std::initializer_list<T> list, const std::string &sep = " ") {
		Print()(std::begin(list), std::end(list), sep);
	}
}print;
struct Println {
	void operator()(void) { std::cout << "\n"; }
	void operator()(double lf) {
		Print()(lf);
		Println()();
	}
	template <typename T> void operator()(T t) {
		Print()(t);
		Println()();
	}
	template <typename T>
	void operator()(const std::complex<T> &c, const std::string &sep = " ") {
		Print()(c, sep);
		Println()();
	}
	template <typename T1, typename T2>
	void operator()(const std::pair<T1, T2> &pair, const std::string &sep = " ") {
		Print()(pair, sep);
		Println()();
	}
	template <typename T>
	void operator()(T begin, T end, const std::string &sep = " ") {
		Print()(begin, end, sep);
		Println()();
		return;
	}
	template <typename T>
	void operator()(const std::vector<T> &v, const std::string &sep = " ") {
		Print()(std::begin(v), std::end(v), sep);
		Println()();
	}
	template <typename T>
	void operator()(std::initializer_list<T> list, const std::string &sep = " ") {
		Print()(std::begin(list), std::end(list), sep);
		Println()();
	}
}println;
inline void Main(void);
signed main(void){
	std::cin.tie(0);
	std::ios::sync_with_stdio(false);
	Main();
	std::cout << std::flush;
	return 0;
}

int Partition(V<PSI> *vec, int first, int last) {
	V<PSI> &v = *vec;
	int pivot = v[last].S;
	int lower = first;
	FOR(i, first, last){
		if (v[i].S <= pivot) {
			swap(v[lower], v[i]);
			lower++;
		}
	}
	swap(v[lower], v[last]);
	return lower;
}
void QuickSort(V<PSI> *vec, int first, int last) {
	if (first >= last)
		return;
	V<PSI> &v = *vec;
	auto q = Partition(&v, first, last);
	QuickSort(&v, first, q - 1);
	QuickSort(&v, q + 1, last);
	return;
}

int Merge(V<PSI> *vec, int left, int mid, int right) {
	V<PSI> &v = *vec;
	int n1 = mid - left;
	int n2 = right - mid;
	V<PSI> L(n1 + 1), R(n2 + 1);
	REP(i, n1) {
		L[i] = v[left + i];
	}
	REP(i, n2) {
		R[i] = v[mid + i];
	}
	L[n1].S = R[n2].S = numeric_limits<int>::max();
	int i = 0;
	int j = 0;
	int count = 0;
	FOR(k, left, right) {
		count++;
		if (L[i].S <= R[j].S) {
			v[k] = L[i];
			i++;
		} else {
			v[k] = R[j];
			j++;
		}
	}
	return count;
}
int MergeSort(V<PSI> *vec, int left, int right) {
	V<PSI> &v = *vec;
	int count = 0;
	if (left + 1 < right) {
		int mid = (left + right) / 2;
		count += MergeSort(&v, left, mid);
		count += MergeSort(&v, mid, right);
		count += Merge(&v, left, mid, right);
	}
	return count;
}

#define STBL(A) ((A) ? "Stable" : "Not stable")
inline void Main(void) {
	V<PSI> v(read());
	for (auto&& e : v) {
		e.F = readS();
		e.S = read();
	}
	V<PSI> w(v);

	QuickSort(&v, 0, v.size() - 1);
	MergeSort(&w, 0, v.size());
	bool result = true;
	REP(i, v.size()) {
		if (v[i].F != w[i].F || v[i].S != w[i].S) {
			result = false;
			break;
		}
	}
	println(STBL(result));
	println(v, "\n");
}

