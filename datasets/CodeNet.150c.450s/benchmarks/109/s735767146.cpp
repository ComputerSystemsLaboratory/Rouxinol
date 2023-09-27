#include <iostream>
#include <cstdlib>
#include <algorithm>
#include <vector>
using namespace std;
const int day=86400;

int main(){
	while(1){
		int n;
		cin >> n;
		if(n==0) break;
		
		vector<int> v(day,0);
		for(int i=0; i<n; i++){
			for(int s=0; s<2; s++){
				string tmp;
				cin >> tmp;
				int sec=0;
				for(int j=0,r=3600; j<9; j+=3,r/=60){
					tmp[j+2] = 0;
					sec += atoi(&tmp[j])*r;
				}
				v[sec] += -2*s+1;
			}
		}
		
		int ans=0;
		for(int i=1; i<day; i++){
			v[i] += v[i-1];
			ans = max(ans, v[i]);
		}
		cout << ans << endl;
	}
	return 0;
}