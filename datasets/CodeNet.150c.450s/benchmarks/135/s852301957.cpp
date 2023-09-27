#include<cstdio>
#include<vector>
#include<algorithm>
using namespace std;
vector<int> Na;//???????´???????
vector<int> Ma;
vector<int> Nw;//?????¨????????????????????????
vector<int> Mw;
int solve(void){
	int i,j,ans=0,a=0,N=0,M=0;
	scanf("%d %d",&N,&M);
	if(N*M==0){
		return 0;
	}
	Na.push_back(0);
	Ma.push_back(0);
	for(i=0;i<N;i++){
		scanf("%d",&a);
		a+=Na[i];
		Na.push_back(a);
	}
	for(i=0;i<M;i++){
		scanf("%d",&a);
		a+=Ma[i];
		Ma.push_back(a);
	}
	for(i=0;i<=N;i++){
		for(j=i+1;j<=N;j++){
			Nw.push_back(Na[j]-Na[i]);
		}
	}
	for(i=0;i<=M;i++){
		for(j=i+1;j<=M;j++){
			Mw.push_back(Ma[j]-Ma[i]);
		}
	}
	sort(Nw.begin(),Nw.end());
	sort(Mw.begin(),Mw.end());
	for(i=0;i<Nw.end()-Nw.begin();i++){
		ans-=lower_bound(Mw.begin(),Mw.end(),Nw[i])-upper_bound(Mw.begin(),Mw.end(),Nw[i]);
	}
	printf("%d\n",ans);
	Na.clear();
	Nw.clear();
	Ma.clear();
	Mw.clear();
	return 10;
}
int main(void){
	while(solve());
}