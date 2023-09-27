#include<stdio.h>
#include<algorithm>
using namespace std;
pair<int,int> v[10000];
int main(){
	int a,b;
	while(scanf("%d%d",&a,&b),a){
		int ret=0;
		for(int i=0;i<a;i++){
			int c,d;
			scanf("%d%d",&c,&d);
			ret+=c*d;
			v[i]=make_pair(-d,c);
		}
		std::sort(v,v+a);
		for(int i=0;i<a;i++){
			if(b>=v[i].second){
				b-=v[i].second;
				ret+=v[i].first*v[i].second;
			}else{
				ret+=v[i].first*b;
				b=0;
			}
		}
		printf("%d\n",ret);
	}
}