#include<cstdio>
#include<cstring>
#include<vector>
#include<queue>
#include<algorithm>
#include<cmath>
#include<climits>
#include<string>
#include<set>
#include<map>
using namespace std;
#define rep(i,n) for(int i=0;i<((int)(n));i++)
#define reg(i,a,b) for(int i=((int)(a));i<=((int)(b));i++)
#define irep(i,n) for(int i=((int)(n))-1;i>=0;i--)
#define ireg(i,a,b) for(int i=((int)(b));i>=((int)(a));i--)
typedef long long int lli;
typedef pair<int,int> mp;
#define fir first
#define sec second
#define IINF INT_MAX
#define LINF LLONG_MAX


int n;

bool isbig(mp pa,mp pb){
	int da = pa.fir*pa.fir+pa.sec*pa.sec;
	int db = pb.fir*pb.fir+pb.sec*pb.sec;
	if(da!=db)return (da>db);
	return (pa.fir>pb.fir);	
}

int main(void){
	for(;;){
		int w,h;
		scanf("%d%d",&h,&w);
		if(h==0)break;
		mp cp(h,w);
		mp pa(1000,1000);
		reg(y,1,150){
			reg(x,y+1,150){
				mp np(y,x);
				if(!isbig(np,cp))continue;
				if(isbig(pa,np))pa=np;
			}
		}
		printf("%d %d\n",pa.fir,pa.sec);
	}
	return 0;
}