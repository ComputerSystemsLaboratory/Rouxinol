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
	int n,m;
	cin>>n;
	string s;
	set<string>u;
	for(int i=0;i<n;i++){
		cin>>s;
		u.insert(s);
	}
	cin>>m;
	int parity=0;
	for(int i=0;i<m;i++){
		cin>>s;
		if(u.count(s)==0)cout<<"Unknown"<<" "<<s<<endl;
		else{
			if(parity==0){
				cout<<"Opened by"<<" "<<s<<endl;
				parity=1;
			}
			else{
				cout<<"Closed by"<<" "<<s<<endl;
				parity=0;
			}
		}
	}
    return 0;
}
