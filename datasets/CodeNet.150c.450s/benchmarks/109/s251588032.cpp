#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct TIME {
	int time;
	int start;
	bool operator<(const TIME &t) const{
		if( time == t.time ){
			return start<t.start;
		}
		return time<t.time;
	}
};

int main() {
	while(true){
		
		vector<TIME> times;
		
		int n;
		cin >> n;
		if(n==0)break;
		
		for(int i=0;i<n;i++){
			int h,m,s;
			char c;
			cin >> h >> c >> m >> c >> s;
//			cout << h <<":"<<m<<":"<<s <<endl; 
			TIME t0={h*60*60+m*60+s,1};
			times.push_back(t0);

			cin >> h >> c >> m >> c >> s;
//			cout << h <<":"<<m<<":"<<s<<endl; 
			TIME t1={h*60*60+m*60+s,0};
			times.push_back(t1);
		}

		sort( times.begin(),times.end());

		int count=0;
		int ans=0;
		for(TIME &t : times){
//			cout << t.start << " " << t.time << endl;;
			if(t.start==1){
				count++;
				ans=max(count,ans);
			}else{
				count--;
			}
		}
		cout << ans << endl;
	}
	
	
	return 0;
}