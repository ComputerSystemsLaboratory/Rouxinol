#include <iostream>
#include <algorithm>
#include <cstdio>
#include <cstring>
using namespace std;

const long long INF =  1000000000000;
const long long N = 10000;

long long n,m;
struct edge{
	long long from,to,cost; 
}w[N];

long long d[N];

void path(long long s){
	for(long long i=0;i<n;i++) d[i]=INF;
	d[s] = 0;
	while(true){
		bool u = false;
		for(long long i=0;i<m;i++){
			edge e = w[i];
			if(d[e.from]!=INF&&d[e.to]>d[e.from]+e.cost){
				d[e.to] = d[e.from]+e.cost;
				//printf("d[%lld] = %lld\n",e.to,d[e.to]);
				u = true;
			}
		}
		if(!u) break;
	}
}

bool f(){
	memset(d,0,sizeof(d));
	for(long long i=0;i<n;i++){
		for(long long j=0;j<m;j++){
			edge e = w[j];
			if(d[e.to]>d[e.from]+e.cost){
				d[e.to]=d[e.from]+e.cost;
				if(i==n-1) return true;
			}
		}
	}
	return false;
}

int main(){
	while((scanf("%lld%lld",&n,&m))!=EOF){
		for(long long i=0;i<m;i++){
			scanf("%lld%lld%lld",&w[i].from,&w[i].to,&w[i].cost);
		}
		if(f()) {
			printf("NEGATIVE CYCLE\n");
			continue;
		}
		for(long long i=0;i<n;i++){
			path(i);
			for(long long j=0;j<n;j++){
				if(d[j]==INF&&j!=n-1) printf("INF ");
				else if(d[j]==INF&&j==n-1) printf("INF");
				else if(d[j]!=INF&&j==n-1)printf("%lld",d[j]);
				else if(d[j]!=INF&&j!=n-1)printf("%lld ",d[j]);
			}
			printf("\n");
		}
	}
} 

