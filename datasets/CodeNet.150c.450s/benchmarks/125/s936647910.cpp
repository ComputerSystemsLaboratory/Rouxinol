#include<cstdio>
#include<stack>
using namespace std;
static const int MAXN=101;
static const int INF=(1<<21);
int main(){
	int m[MAXN][MAXN],n,u,k,v,i,j,first[MAXN]={},second[MAXN]={},l,c=1,o,z=2;
	stack<int> s;
	bool used[MAXN]={};
	scanf("%d",&n);
	for(i=1;i<n+1;i++){
		for(j=1;j<n+1;j++){
			m[i][j]=INF;
		}
	}
	for(i=0;i<n;i++){
		scanf("%d %d",&u,&k);
		for(j=0;j<k;j++){
			scanf("%d",&v);
			m[u][v]=1;
		}
	}
	s.push(1);
	used[1]=true;
	while(1){
		l=s.top();
		if(first[l]==0){
			first[l]=c;
		}
		o=0;
		for(i=1;i<n+1;i++){
			if(m[l][i]==1&&used[i]==false){
				s.push(i);
				o=1;
				used[i]=true;
				break;
			}
		}
		c++;
		if(o==0){
			second[l]=c;
			s.pop();
		}
		if(s.empty()){
			z=0;
			for(i=1;i<n+1;i++){
				if(used[i]==false){
					s.push(i);
					z=1;
					used[i]=true;
					break;
				}
			}
		}
		if(z==0){
			break;
		}
		if(z==1){
			c++;
			z=2;
		}
	}
	for(i=1;i<n+1;i++){
		printf("%d %d %d\n",i,first[i],second[i]);
	}
	return 0;
}