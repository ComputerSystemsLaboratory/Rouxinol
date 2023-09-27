#include<iostream>
#include<vector>
#include<string>
#include<array>
#include<algorithm>
#include<list>
#include<cmath>
#include<iomanip>
#include<queue>
#include<functional>
#include<climits>
#include<iterator>
#include<unordered_set>
#include<unordered_map>
#include<map>
#include<set>
#include<typeinfo>
using namespace std;

const double pi=4*atan(1.0);

constexpr long long mod=static_cast<long long>(1e9+7);

using cWeightEdges=vector<vector<pair<int,int>>>;
using cEdges=vector<vector<int>>;

int main() {
	int n,q;
	cin>>n>>q;
	long long ini=0;
	vector<long long> a(n,ini);
	int backet=sqrt(n);
	vector<long long> b(n/backet+1,ini);
	

	while(q>0){
		--q;
		int Q,x,y;
		cin>>Q>>x>>y;
		if(Q==0){
			--x;
			a[x]+=y;
			b[x/backet]+=y;
		}
		else{
			--x,--y;
			long long ans=0;
			if(y-x+1>=2*backet){
				int i=x;
				if(x%backet){
					for(i=x;i<(x/backet)*backet+backet;++i){
						ans+=a[i];
					}
				}
				for(int j=i/backet;j<y/backet;++j){
					ans+=b[j];
				}
				if(y%backet==backet-1){
					ans+=b[y/backet];
				}
				else{
					for(int j=(y/backet)*backet;j<=y;++j){
						ans+=a[j];
					}
				}
			}
			else{
				for(int i=x;i<=y;++i){
					ans+=a[i];
				}
			}
			cout<<ans<<"\n";
		}
	}
	
	//system("pause");
	return 0;
}