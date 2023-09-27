#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;

pair<int, int> pd[10000];

int main(){
	
	int n=0,m=0,i,j,tmp,secure=0, ans=0;
	int d[10000];
	int p[10000];
	int idx[10000];
	while(1){
		memset(d,0,sizeof(d));
		memset(p,0,sizeof(d));
		
		cin >> n >> m;
		
		if(n == 0 && m == 0){
			break;
		}
		
		for(i=0;i<n;i++){
			cin >> d[i] >> p[i];
			pd[i] = make_pair(p[i],d[i]);
		}
		
		for(i=0;i<n;i++){
			idx[i] = i;
		}
		
		
		//sort
		sort(pd, pd+n);
		reverse(pd, pd+n);

		
		secure = 0;
		
//		while(m > 0){
//			cout << secure << " (^^) " << idx[secure]  << endl;
//			m--;
//			d[secure]--;
//			if(d[secure] == 0){secure--;}		
//		}
		
		for(i=0;i<n;i++){
			if(m >= pd[i].second){
				m -= pd[i].second;
				pd[i].first = 0;
			}else{
				pd[i].second -= m;
				break;
			}
		}
		
		ans = 0;
		
		for(i=0;i<n;i++){
//			cout << d[i] << " " << p[i] << endl;
			ans += pd[i].first * pd[i].second;
		}
		
		cout << ans << endl;
		
	}
	
	return 0;
}