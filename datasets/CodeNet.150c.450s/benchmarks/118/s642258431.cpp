#include <iostream>

using namespace std;
int y[100],m[100],d[100];
int main()
{
	int M = 20 * 10;
	int N = 39*5;
	int n,ans;
	cin >> n;
	for(int i = 0; i < n;++i){
		ans = 0;
		cin >> y[i] >> m[i] >> d[i];
		for(int j = 999; j > y[i]; --j){
			if(j % 3 ) ans += N;
			else ans+= M;
		}
		if(y[i] % 3){
			for(int j = 10; j > m[i];--j){
				if(j % 2){
					ans += 20;
				}
				else ans += 19;
			}
			if(m[i] % 2){
				ans += 20-d[i];
			}
			else ans += 19 - d[i];
		}
		else{
			ans += (10 - m[i])*20;
			ans += 20-d[i];
		}
		cout << ans +1<< endl;
	}
	return 0;
}