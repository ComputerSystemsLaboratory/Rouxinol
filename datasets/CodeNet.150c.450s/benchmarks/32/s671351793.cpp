#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
#include<utility>
#include<map>
#include<set>
#include<queue>
#include<math.h>
using namespace std;
#define mod (1000000000+7)
#define N (10007)
#define INF 1e16
typedef long long ll;
typedef pair<ll,ll> P;


int main(void){
	int m,n1,n2;
	while(true){
		cin>>m>>n1>>n2;
		if(m==0 && n1==0 && n2==0)break;
		vector<int>p(m);
		for(int i=0;i<m;i++)cin>>p[i];
		sort(p.begin(),p.end(),greater<int>());
		int ans=0,index=-1;
		for(int i=n1-1;i<n2;i++){
			if(p[i]-p[i+1]>=ans){
				ans=p[i]-p[i+1];
				index=i;
			}
		}
		cout<<index+1<<endl;
	}
    return 0;
}
