#include <iostream>
#include <math.h>
#include <algorithm>
#include <string>

#define REP(i,n) for(int i=0; i<n; i++)
#define debug(x) cerr << __LINE__ << " : " << #x << " = " << (x) << endl;
 
#define mod 1000000007 //1e9+7(prime number)
#define INF 1000000000 //1e9
#define SIZE 86400	// 60*60*24

using namespace std;
typedef long long ll;

int main(){
	while(1){
		int n, data[SIZE], h, m, s, t, ans;
		
		cin >> n;
		if (n==0) break;
		REP(i,SIZE) data[i] = 0;
		ans = 0;
		
		REP(i,n){
			//debug(i);
			scanf("%d:%d:%d", &h, &m, &s);
			t = h*60*60 + m*60 + s;
			//debug(t);
			data[t]++;
			scanf("%d:%d:%d", &h, &m, &s);
			t = h*60*60 + m*60 + s;
			//debug(t);
			data[t]--;		
		}
		
		
		
		for (int i=1; i<SIZE; i++) data[i]+=data[i-1];
		
		REP(i,SIZE){
			if (ans<data[i]){
				ans = data[i];
			}
		}
			
		
		cout << ans << endl;
	}
	return 0;
}

