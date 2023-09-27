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
	int n;
	string s;
	while(true){
		cin>>n;
		if(n==0)break;
		int l=0,r=0,now=0;
		int ans=0;
		for(int i=0;i<n;i++){
			cin>>s;
			if(s=="lu")l++;
			if(s=="ld")l--;
			if(s=="ru")r++;
			if(s=="rd")r--;
			if(now==0){
				if(l==1&&r==1){
					ans++;
					now=1;
				}
			}
			else{
				if(l==0&&r==0){
					ans++;
					now=0;
				}
			}
		}
		cout<<ans<<endl;
	}
    return 0;
}
