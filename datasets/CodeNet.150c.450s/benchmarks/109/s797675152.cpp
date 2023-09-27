#include<cstdio>

#include<ctime>
#include<cstdlib>
#include<cstring>
#include<utility>
#ifdef XS
	#include<De>
#endif
using namespace std;
#define MS(m) memset(m,0,sizeof(m))

typedef unsigned U;
typedef pair<int,int > P;
typedef long long ll;
void inp();
int main(){
#ifdef XS
	freopen("zoj2013.in","r",stdin);
#endif
	try{
		while(1)
		inp();
	}
	catch(... ){
#ifdef XS
		printf("%s","exception");
#endif
	}//for compatibility with cygwin c++ runtime
	return 0;
}
const int N = 1e5;
int tim[N];
void inp(){
	MS(tim);
	int n;scanf("%d",&n);
	if(!n)exit(0);
	time_t raw = time(0);
	tm * be = gmtime(&raw);
	tm * en = new tm;
	memcpy(en, be, sizeof(tm));
	be->tm_hour = be->tm_min = be->tm_sec = 0;
	for(int i = 0;i<n;i++){
		for(int c = 1 ;c>=-1;c-=2){
			scanf("%d:%d:%d", &en->tm_hour,&en->tm_min,&en->tm_sec);
			U d = (U)difftime(mktime(en),mktime(be));
			tim[d] += c;
		}
	}
	int ans = -1;
	for(int i = 1;i<N;i++){
		tim[i]+=tim[i-1];
		if(tim[i]>ans)
			ans = tim[i];
	}
	printf("%d\n",ans);
}
//zoj2013.cc by xsthunder at Tue Jul 25 21:35:55 2017