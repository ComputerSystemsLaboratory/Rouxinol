#include<stdio.h>
#include<algorithm>
using namespace std;
pair<int,pair<int,int> > p[30000];
int main(){
	int a,b;
	int sz=0;
	for(int i=1;i<=150;i++){
		for(int j=i+1;j<=150;j++){
			p[sz++]=make_pair(i*i+j*j,make_pair(i,j));
		}
	}
	std::sort(p,p+sz);
	while(scanf("%d%d",&a,&b),a){
		pair<int,pair<int,int> >q=make_pair(a*a+b*b,make_pair(a,b));
		pair<int,pair<int,int> >r=*upper_bound(p,p+sz,q);
		printf("%d %d\n",r.second.first,r.second.second);
	}
}