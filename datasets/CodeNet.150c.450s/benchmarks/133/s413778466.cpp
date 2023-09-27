/********include********/

#include <cstdio>
#include <cstring>
#include <iostream>
#include <string>
#include <cmath>
#include <bitset>
#include <vector>
#include <map>
#include <set>
#include <queue>
#include <deque>
#include <algorithm>
#include <complex>
#include <unordered_map>
#include <unordered_set>
#include <random>
#include <cassert>
#include <fstream>
#include <utility>
#include <functional>
#define popcount __builtin_popcount
using namespace std;

/***/
//#include <iomanip>
//#include <cmath>
#include <bits/stdc++.h>

/********define********/

#define rep(i,x) for(long long i=0;i<x;i++)
#define repn(i,x) for(long long i=1;i<=x;i++)
#define rrep(i,x) for(long long i=x-1;i>=0;i--)
#define rrepn(i,x) for(long long i=x;i>1;i--)
#define REP(i,n,x) for(long long i=n;i<x;i++)
#define REPN(i,n,x) for(long long i=n+1;i<x;i++)

#define pr printf
#define re return
#define mod 1000000007
//#define mod 998244353
#define INF 1e18+5//19桁
const double PI=3.14159265358979323846;
#define fi first
#define se second
#define MAX(a,b) (((a)>(b))?(a):(b))
#define MIN(a,b) (((a)<(b))?(a):(b))
#define all(x) (x).begin(),(x).end()

typedef long long int ll;
typedef pair<long long, long long> P;

/********128bit CFではコンパイルNG********/
/*
std::ostream &operator<<(std::ostream &dest, __int128_t value) {
	std::ostream::sentry s(dest);
	if (s) {
		__uint128_t tmp = value < 0 ? -value : value;
		char buffer[128];
		char *d = std::end(buffer);
		do {
			--d;
			*d = "0123456789"[tmp % 10];
			tmp /= 10;
		} while (tmp != 0);
		if (value < 0) {
			--d;
			*d = '-';
		}
		int len = std::end(buffer) - d;
		if (dest.rdbuf()->sputn(d, len) != len) {
			dest.setstate(std::ios_base::badbit);
		}
	}
	return dest;
}

__int128 parse(string &s) {
	__int128 ret = 0;
	for (int i = 0; i < s.length(); i++)
	if ('0' <= s[i] && s[i] <= '9')
		ret = 10 * ret + s[i] - '0';
	return ret;
}
*/

/********よく使う関数********/

// 素因数分解
vector<pair<long long, long long> > prime_factorize(long long n) {
	vector<pair<long long, long long> > res;
	for (long long p = 2; p * p <= n; ++p) {
		if (n % p != 0) continue;
		int num = 0;
		while (n % p == 0) { ++num; n /= p; }
		res.push_back(make_pair(p, num));
	}
	if (n != 1) res.push_back(make_pair(n, 1));
	return res;
}

// 約数列挙
vector<long long> calc_divisor(long long n) {
	vector<long long> res;
	for (long long i = 1LL; i*i <= n; ++i) {
		if (n % i == 0) {
			res.push_back(i);
        	long long j = n / i;
        	if (j != i) res.push_back(j);
		}
	}
	sort(res.begin(), res.end());
	return res;
}

//最大公約数
ll gcd(ll x, ll y) { return y ? gcd(y, x % y) : x; }

//最大公約数 複数個
ll gcd(const vector<ll> &v) {
	ll ret = v[0];
	for (ll i = 1; i < v.size(); i++)
		ret = gcd(ret, v[i]);
	return ret;
}

//最小公倍数
ll lcm(ll x, ll y) { return x / gcd(x, y) * y; }

//最小公倍数 複数個
ll lcm(const vector<ll> &v) {
	ll ret = v[0];
	for (ll i = 1; i < v.size(); i++)
		ret = lcm(ret, v[i]);
	return ret;
}

//大文字→小文字
void to_lower(string& x) {
  for (ll i = 0; i < x.length(); i++) if ('A' <= x[i] && x[i] <= 'Z') {
    x[i] -= 'A' - 'a';
  }
}

//小文字→大文字
void to_bigger(string& x) {
  for (ll i = 0; i < x.length(); i++) if ('a' <= x[i] && x[i] <= 'z') {
    x[i] += 'A' - 'a';
  }
} 

/********変数宣言********/
//vector<long long> g[200020];
vector<pair<long long,long long>> g[200020];
ll s[200020];
bool used[200020];
//bool dp[100005];

ll A,B,C,D,H,K,M,N,Q,R,S,T,W,X,Y;
double dA,dB,dC,dH,dK,dM,dN,dQ,dR,dS,dT,dW,dX,dY;

//1000000000000000000  //10^18
//1000000000           //10^9

//ABCDEFGHIJKLMNOPQRSTUVWXYZ    //26
ll sagariyasusa[366];
ll agari[366][366];
ll last[366];
ll jissai[366];

int main()
{
	cin.tie(0);
	ios::sync_with_stdio(false);

	/********よく使う********/

	/*ベクター*/
	//std::sort(v.begin(),v.end());//昇順ソート
	//sort(all(v));
	//std::sort(v.begin(),v.end(),std::greater<long long>());//降順ソート
	//v.erase(unique(v.begin(), v.end()), v.end());
	//vector<ll> v(N, 0);

	/*ペア*/
	//vector<pair<long long, long long> > p(N);
	//sort(p.begin(), p.end());
	//sort(p.begin(), p.end(),greater<pair<long long,long long> >());

	/*プライオリティキュー*/
	//priority_queue<long long, vector<long long>, greater<long long> > que;
	//priority_queue<long long> que;

	/*マップ*/
	//map<ll, ll, std::greater<ll>> mp;

	/*デキュー*/
	//deque<long long> dque;

	/*文字列*/
	//string s;
	//wk=(ll)stoi(s);
	//string t;
	//t=s.substring(0,1);//0文字目から1つ取り出す
	//if(s.size()%2==0 && s.substr(0,s.size()/2)==s.substr((s.size())/2))//引数一つの時はその個所から最後まで
	//s.insert(0, " ");
	//reverse(s.begin(),s.end());
	//s+="-AI";
	//s+=char('a'+N%26);
	//string t;
	//t=s.substr(s.size()-2);
	//to_bigger(t);
	//cout << s.substr(0,s.size()-2)+t << "\n";
	
	/*セット*/
	//set<ll> st;
	
	/*スタック*/
	//stack<long long> sta;   

	/*キュー*/
	//queue<long long> que;
	
	/*パミュ*/
	//do{
	//}while(next_permutation(v.begin(),v.end()));

	/*でかい数*/
	//__int128  aa = 1;


	/******初期化***********/

	long long ans,sum,cnt,cnt1,flg,flg1,flg2;
	
	long long max,max1;
	long long min,min1;
	long long wk,wk1;
	max=max1=wk=wk1=sum=ans=cnt=cnt1=flg=flg1=flg2=0;
	min=min1=INF;

	double dwk,dwk1,dsum,dsum1,dans,dans1;
	dwk=dwk1=dsum=dsum1=dans=dans1=0;
	
	
	cin >> D;
	repn(i,26){
		cin >> sagariyasusa[i];
	}
	repn(i,D){
		repn(j,26){
			cin >> wk;
			agari[i][j]=wk;
		}
	}

	repn(i,D){
		cin >> wk;
		jissai[i]=wk;
	}
	repn(i,D){//i日目
		last[jissai[i]]=i;	
		sum+=agari[i][jissai[i]];
		repn(j,26){
			sum-=sagariyasusa[j]*(i-last[j]);
		}
		pr("%lld\n",sum);
	}

	re 0;	

	/******出力関連***********/
	//pr("%lld\n",N);
	//printf("%lld",(ll)ceil(dB/dA));
	//puts("Yes");
	//文字列の出力
	//std::cout << s << std::endl;
	//printf("%.12f\n",ret);
	//cout << sum << '\n';
	//pr("%02lld:%02lld",wk/60,wk%60);

	/******CF***********/
	/*
	cin >> T;
	while(T--){
		cin >> N >> K;
		std::vector<long long> v(N);	
		// 配列入力1
		/*
		for(long long i=0; i<N; i++){
			std::cin >> v[i];
		}
		*/
		//cout << sum << '\n';
		//文字列の出力
    	//std::cout << s << std::endl;
	//}
	//re 0;

	/******よく使う***********/

	//素因数分解
	//1の場合pfは空 5の場合pfはfi=5,se=1
	/*
	auto pf = prime_factorize(v[i]);
	for(auto p:pf){
		if(p.se!=wk){		
		}
	}
	*/
	//約数列挙
	/*
	vector<long long> div = calc_divisor(M);

	// M の約数 d であって、d * N <= M となる最大の d を求める
	long long res = 1;
	for (auto d : div) {
		if (d * N <= M) res = max(res, d);
	}
	*/

	//最小公倍数
	/*
	std::vector<ll> v(N);
	rep(i, N) {
		cin >> v[i];
	}	
	cout << lcm(v) << endl;
	return 0;
	*/

	//最小公約数
	/*
	std::vector<ll> v(N);
	rep(i, N) {
		cin >> v[i];
	}	
	cout << gcd(v) << endl;
	return 0;
	*/

	//素数判定
	/*
	for(int i=x; ; i++){
		bool dame=0;
		for(int j=2; j*j<=i; j++){
			if(i%j==0){
				dame=1;
				break;
			}
		}
		if(!dame){
			cout<<i<<endl;
			return 0;
		}
	}
	*/
	//set典型
	/*
	std::set<long long> st;
	for(long long i=0; i<N; i++){
		std::cin >> v[i];
		if(st.find(v[i])==st.end()){
			st.insert(v[i]);
		}
		else{s
			st.erase(v[i]);
		}
	}

	//整数判定
	//if(ceil(sqrt(wk)==floor(sqrt(wk))))

	//パミュ
	/*
	sort(v.begin(),v.end());
	do{
	}while(next_permutation(v.begin(),v.end()));
	*/

	//26進数
	/*
	string s;
	while(N>=0){
		s+=char('a'+N%26);
		N/=26;
		N--;
	}
	reverse(all(s));
	*/

	/******出力関連***********/
	//pr("%lld\n",N);
	//printf("%lld",(ll)ceil(dB/dA));
	//puts("Yes");
	//文字列の出力
	//std::cout << s << std::endl;
	//printf("%.12f\n",ret);
	//cout << sum << '\n';
	//pr("%02lld:%02lld",wk/60,wk%60);

	re 0;
    
}
