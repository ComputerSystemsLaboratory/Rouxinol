#include <iostream>
#include <cstdio>
using namespace std;

int main(){
	int n;
	while(cin >> n,n){
		int cnt[100000] = {},ma = 0;
		for(int i = 0;i < n;i++){
			int a,b,c,d,e,f;
			scanf("%d:%d:%d %d:%d:%d",&a,&b,&c,&d,&e,&f);
			cnt[a * 3600 + b * 60 + c + 1]++;
			cnt[d * 3600 + e * 60 + f + 1]--;
		}
		for(int i = 1;i <= 86400;i++){
			cnt[i] += cnt[i - 1];
			ma = max(ma,cnt[i]);
		}
		cout << ma << endl;
	}
}