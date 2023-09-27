#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cstring>
#include <map>
#include <queue>
#include <stack>
#include <set>
#include <functional>
#include <sstream>
#include <complex>
#include <climits>
using namespace std;

#define REP(i,a,n) for(int i=(a);i<(int)(n);i++)
#define rep(i,n) REP(i,0,n)
#define pb push_back
#define mp make_pair
#define all(x) x.begin(),x.end()
#define EPS 1e-8

int main(){
	int n,p;
	int owan[64],temoto[64];
	while(scanf("%d%d",&n,&p),n|p){
		rep(i,64)owan[i]=temoto[i]=0;
		owan[0] = p;
		int cur = 0;
		for(int i=0; i<=1000000; i++){
			if( owan[cur]>0 ){
				owan[(cur+1)%n] = owan[cur]-1;
				temoto[cur]++;
				if( owan[cur]-1==0 ){
					if( temoto[cur]==p ){
						printf("%d\n",cur);
						break;
					}
				}
			}else{
				owan[(cur+1)%n] = temoto[cur];
				temoto[cur] = 0;
			}
			//printf("next:owan[%d]:%d , temoto[%d]:%d\n",(cur+1)%n,owan[(cur+1)%n],cur,temoto[cur]);
			cur = (cur+1)%n;
		}
	}
	return 0;
}