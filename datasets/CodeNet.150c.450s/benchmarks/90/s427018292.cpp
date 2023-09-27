#include<cstdio>
#include<algorithm>
#include<vector>
#include<string>
#include<iostream>
#include<queue>
#include<map>
#include<set>
#include<complex>
#include<stack>
#include<cmath>

using namespace std;

#define reps(i,f,n) for(int i=f;i<int(n);i++)
#define rep(i,n) reps(i,0,n)


#define X real()
#define Y imag()
typedef complex<double> P;

int main(){
	
	map<int,int> m;
	int a;
	while(scanf("%d",&a)!=EOF){
		m[a]++;
	}
	
	typedef pair<int,int> pii;
	vector<pii> b;
	
	map<int,int>::iterator it = m.begin();
	while(it!=m.end()){
		b.push_back(pii(-it->second, it->first));
		it++;
	}
	
	sort(b.begin(),b.end());
	
	for(int i=0;i<b.size();i++){
		if(i!=0 && b[i].first!=b[i-1].first){
			break;
		}
		printf("%d\n",b[i].second);
	}
	
	
}