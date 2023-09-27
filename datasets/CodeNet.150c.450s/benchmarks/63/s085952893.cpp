#include<cstdio>
#include<algorithm>
#include<queue>
using namespace std;

int max(int,int);
int main(void){
	const int inf = 1001001001;
	int v,e,r;
	int i,j,k;
	pair<int,int> l[100000];
	pair<int,pair<int,int> > P[500000];
	bool boo[100000];
	int a[100000],b[100000];
	pair<int,int> Q;
	//??\???
	scanf("%d%d%d",&v,&e,&r);
	for(i=0;i<e;i++){
		scanf("%d%d%d",&P[i].first,&P[i].second.first,&P[i].second.second);
	}
	sort(P,P+e);
	for(i=0;i<v;i++){
		a[i] = inf;
		b[i] = inf;
	}
	for(i=0;i<e;i++){
		P[i].second.second=P[i].second.second*(-1);
	}
//printf("P=(");
//for(i=0;i<e;i++){
//	printf("%d,",P[i].first);
//}
//printf(")\n");
	a[P[0].first]=0;
	b[P[e-1].first]=e-1;
	for(i=0;i<e-1;i++){
		if(P[i+1].first>P[i].first){
			a[P[i+1].first]=i+1;
			b[P[i].first]=i;
		}
	}
	for(i=0;i<v;i++){
		if(a[i]==inf){
			a[i]=1;
			b[i]=0;
		}
	}
//for(i=0;i<v;i++){
//	printf("a[%d]=%d,b[%d]=%d\n",i,a[i],i,b[i]);
//}
	for(i=0;i<v;i++){
		l[i].first=inf*(-1);
		l[i].second=i;
	}
	l[r].first=0;	//?????¢????????????
	
	priority_queue<pair<int,int> > q;//????¢????????????\???
	for(i=0;i<v;i++){
		q.push(l[i]);
		boo[i]=true;
	}
	while(!q.empty()){
		Q=q.top();
//printf("Q=(%d,%d)\n",Q.first,Q.second);
		q.pop();
		if(boo[Q.second]==true){
			boo[Q.second]=false;
			for(i=a[Q.second];i<=b[Q.second];i++){
//printf("done\n");
				int t=P[i].second.first;
				int d=P[i].second.second;
				l[t].first=max(l[t].first,Q.first+d);
//printf("i=%d,l[%d]=(%d,%d)\n",i,t,l[t].first,l[t].second);
				q.push(l[t]);				
			}
		
		}
	}
	for(i=0;i<v;i++){
		int k=l[i].first*(-1);
		if(k!=inf){
			printf("%d\n",k);
		} else {
			printf("INF\n");
		}
	}
	return 0;
}	

int max(int a,int b){
	if(a>b){
		return a;
	}else{
		return b;
	}
}
	
		
		
			
	
	