#include<map>
#include<set>
#include<list>
#include<cmath>
#include<queue>
#include<stack>
#include<cstdio>
#include<string>
#include<vector>
#include<complex>
#include<cstdlib>
#include<cstring>
#include<climits>
#include<numeric>
#include<sstream>
#include<iostream>
#include<algorithm>
#include<functional>

#define MP make_pair
#define PB push_back
#define ALL(x) (x).begin(),(x).end()
#define REP(i,n) for(int i=0;i<(n);i++)
#define REP1(i,n) for(int i=1;i<(n);i++)
#define REP2(i,d,n) for(int i=(d);i<(n);i++)
#define RREP(i,n) for(int i=(n);i>=0;i--)
#define CLR(a)      memset((a),0,sizeof(a))
#define MCLR(a)     memset((a),-1,sizeof(a))
#define RANGE(x,y,maxX,maxY) (0 <= (x) && 0 <= (y) && (x) < (maxX) && (y) < (maxY))

using namespace std;

typedef long long LL;
typedef unsigned long long ULL;
typedef vector<int> VI;
typedef vector<VI > VVI;
typedef vector<string> VS;
typedef vector<LL> VLL;
typedef pair<int,int> PII;

const int INF = 0x3f3f3f3f;
const LL INFL = 0x3f3f3f3f3f3f3f3fLL;
const double EPS = 1e-9;

const int DX[]={1,0,-1,0},DY[]={0,-1,0,1};

int main(){
	int x,y,z,e,ee,res=10000000;
	while(1){
		cin >> e;
		if(e==0){
			break;
		}
		for(z=0;z<=1000;z++){
			ee=e;
			if(z*z*z<=ee)
				ee-=z*z*z;
			for(y=0;y<=1000;y++){
				x=ee;
				if(y*y<=x)
					x-=y*y;
				res=min(res,x+y+z);
			}
		}
		cout << res << endl;
		res=1000000;
	}
	return 0;
}



/*int main(){
	long z,e,ee,res=1000000;
	while(1){
		cin >> e;
		if(e==0)
			break;

		for(int i=0; e!=0;i++){
            if(i*i*i > e){
                z = i;
                break;
            }
        }
        
        for(int i=0; i<20;i++){
            z-=1;
            ee=e;
            if(z<0){
                z=0;
            }
            ee-=z*z*z;
            if(ee==0){
                res=min(res,z);
            }
            for(int y=0;ee!=0;y++){
                if(y*y > ee){
                    ee-=(y-1)*(y-1);
					res=min(res,z+(y-1)+ee);
					break;
				}
            }
		}
        cout << res << endl;
		res=1000000;
	}
	return 0;
}*/