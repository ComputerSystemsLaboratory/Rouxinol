#include <bits/stdc++.h>
 
using namespace std;
 
//conversion
//------------------------------------------
inline int toInt(string s) {int v; istringstream sin(s);sin>>v;return v;}
template<class T> inline string toString(T x) {ostringstream sout;sout<<x;return sout.str();}
 
//math
//-------------------------------------------
template<class T> inline T sqr(T x) {return x*x;}
 
//typedef
//------------------------------------------
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
#define SORT(c) sort((c).begin(),(c).end())
 
//repetition
//------------------------------------------
#define FOR(i,a,b) for(LL i=(a);i<(b);++i)
#define REP(i,n)  FOR(i,0,n)
 
//constant
//--------------------------------------------
const double EPS = 1e-10;
const double PI  = acos(-1.0);
const long INF=pow(2,31)-1;
//clear memory
#define CLR(a) memset((a), 0 ,sizeof(a))
 
const long P_SIZE=301;
const long MAX_N=100004;
long packet[401];
long arr[MAX_N];

long getSum(long x,long y){
	long res=0;
	if(y-x<=4*P_SIZE){//1???????????±??????????????¨??§?????????
		FOR(i,x,y+1){
			res+=arr[i];
		}
		return res;
	}
	long pb=x/P_SIZE+1;
	long pd=y/P_SIZE-1;
	for(long i=x;i<pb*P_SIZE;i++){
		res+=arr[i];//????????????
	}
	for(long i=pb;i<pd;i++){//i=[pb*P_SIZE,pd*P_SIZE)
		//cout<<"!2"<<endl;
		res+=packet[i];//?????±????????????????????????
	}
	for(long i=pd*P_SIZE;i<=y;i++){
		//cout<<"!3"<<endl;
		res+=arr[i];//????????????
	}
	return res;
}

void add(long x,long y){
	arr[x]+=y;
	long pb=x/P_SIZE;//?????????????±????????????±??????
	packet[pb]+=y;//[pb*P_SIZE,(pb+1)*P_SIZE)
}

int main(){
	long N,Q;
	cin>>N>>Q;
	CLR(packet);
	CLR(arr);	
	REP(i,Q){
		long c,x,y;
		cin>>c>>x>>y;
		if(c==0){
			add(x,y);
		}else{
			cout<<getSum(x,y)<<endl;
		}
	}
	//REP(i,SZ(res))cout<<res[i]<<endl;
	return 0;
}