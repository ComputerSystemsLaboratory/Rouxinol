#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;i++)
#define REP(i,n) for(int i=1;i<=n;i++)
typedef long long ll;

int main(){
	int n;
	cin >> n;
	
	while(n!=0){
		vector<int> train(86405);
		rep(i,n){
			string s1,s2;
			cin >> s1 >> s2;
			int time1 = 0;
			time1 += 3600*(10*(s1[0] - '0') + (s1[1] - '0'));
			time1 += 60*(10*(s1[3] - '0') + (s1[4] - '0'));
			time1 += 10*(s1[6] - '0') + (s1[7] - '0');
			train[time1]++;
			int time2 = 0;
			time2 += 3600*(10*(s2[0] - '0') + (s2[1] - '0'));
			time2 += 60*(10*(s2[3] - '0') + (s2[4] - '0'));
			time2 += 10*(s2[6] - '0') + (s2[7] - '0');
			train[time2]--;
		}
		
		rep(i,86401){
			if(i>0){
				train[i] += train[i-1];
			}
		}
		
		int ans = 0;
		
		rep(i,86401){
			ans = max(ans,train[i]);
		}
		
		cout << ans << endl;
		
		cin >> n;
		
	}
	
	
	
    return 0;
}


