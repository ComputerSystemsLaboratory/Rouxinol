#include<iostream>
#include<cmath>
#include<cstdio>
#include<algorithm>
#include<vector>
#include<cstring>

using namespace std;

#define INF 999999999

int main(){
	int ans, N, sum, now;
	while(1){
		cin >> N;
		if(!N)break;
		ans = 0;
		now = 1;
		sum = 1;
		while((N-sum)>0){
			if((N-sum)%(now+1)==0){
				ans++;
			}
			now ++;
			sum += now;
		}
		
		cout << ans << endl;
		now++;
	}
	return 0;
}