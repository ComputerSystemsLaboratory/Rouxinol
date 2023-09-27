//include
//------------------------------------------
#include <vector>
#include <list>
#include <map>
#include <set>
#include <queue>
#include <stack>
#include <bitset>
#include <algorithm>
#include <functional>
#include <numeric>
#include <utility>
#include <sstream>
#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <cctype>
#include <string>
#include <cstring>
#include <ctime>
#include <fstream>
#include <complex>
#include <math.h>

using namespace std;

//conversion
//------------------------------------------
inline long toInt(string s) {int v; istringstream sin(s);sin>>v;return v;}
inline long toLong(string s) {long v; istringstream sin(s);sin>>v;return v;}
template<class T> inline string toString(T x) {ostringstream sout;sout<<x;return sout.str();}

//math
//-------------------------------------------
template<class T> inline T sqr(T x) {return x*x;}

//typedef
//------------------------------------------
typedef vector<int> VI;
typedef vector<VI> VVI;
typedef vector<string> VS;
typedef pair<int, int> PII;
typedef pair<long, long> PLL;
typedef long long LL;
//container util
//------------------------------------------
#define ALL(a)  (a).begin(),(a).end()
#define RALL(a) (a).rbegin(), (a).rend()
#define PB push_back
#define MP make_pair
#define SZ(a) int((a).size())
#define EACH(i,c) for(typeof((c).begin()) i=(c).begin(); i!=(c).end(); ++i)
#define EXIST(s,e) ((s).find(e)!=(s).end())
#define SORT(c) sort((c).begin(),(c).end())

//repetition
//------------------------------------------
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define REP(i,n)  FOR(i,0,n)

//constant
//--------------------------------------------

//clear memory
#define CLR(a) memset((a), 0 ,sizeof(a))

const long double EPS = 1e-12;
const int INF = 10000;

map<char,int>mc;
int decode(string str){
	int res=0;
	int tmp=1;
	REP(i,SZ(str)){
		if(str[i]>='0'&&str[i]<='9'){
			tmp=(unsigned int)(str[i]-'0');
		}else{
			res+=tmp*mc[str[i]];
			tmp=1;
		}
	}
	return res;
}

string encode(int sum){
	string res="";
	if(sum>=1000){
		if(sum/1000==1)res+='m';
		else res+=(toString((int)(sum/1000))+'m');
		sum%=1000;
	}
	if(sum>=100){
		if(sum/100==1)res+='c';
		else res+=(toString((int)(sum/100))+'c');
		sum%=100;
	}
	if(sum>=10){
		if(sum/10==1)res+='x';
		else res+=(toString((int)(sum/10))+'x');
		sum%=10;
	}
	if(sum==1)res+='i';
	else if(sum>=2)res+=(toString(sum)+'i');
	return res;
}
int main(){
	int N;
	cin>>N;
	mc.insert(MP('m',1000));
	mc.insert(MP('c',100));
	mc.insert(MP('x',10));
	mc.insert(MP('i',1));
	REP(T,N){
		string s1,s2;
		cin>>s1>>s2;
		cout<<encode(decode(s1)+decode(s2))<<endl;
	}
	return 0;
}