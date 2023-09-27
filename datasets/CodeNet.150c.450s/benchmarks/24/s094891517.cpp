#include<iostream>
#include<vector>
#include<algorithm>
#include<functional>
using namespace std;
struct Span{
	int d;
	int p;
	Span():d(0),p(0){}
	Span(int d, int p):d(d),p(p){}
	bool operator>(const Span &t)const{ return p>t.p; }
};
int main(){
	while(true){
		int ans = 0;
		int n,m;
		vector<Span> vspan;
		scanf("%d%d", &n, &m);
		if(n==0&&m==0)break;
		for(int i = 0; i < n; ++i){
			int d,p;scanf("%d%d", &d, &p);
			vspan.push_back( Span(d,p) );
			ans += d * p;
		}
		sort(vspan.begin(), vspan.end(), greater<Span>());
		for(unsigned int i = 0; i < vspan.size(); ++i){
			if( m >= vspan[i].d ){
				m -= vspan[i].d;
				ans -= vspan[i].d * vspan[i].p;
			}else if( m > 0 ){
				ans -= m * vspan[i].p;
				m -= m;
			}
			//cout << ans << endl;
		}
		printf("%d\n", ans);
	}
	return 0;
}