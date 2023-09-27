#include <bits/stdc++.h>
using namespace std;

const int MAXN = 205;

int t, n;
long long a[MAXN];
char s[MAXN];

int m;
long long b[MAXN], c[MAXN], d[MAXN];
bool check(long long x){
	for(int i = 0; i < m; i++)
		c[i] = b[i];
	
	int k = 0;
	for(int i = 0; i < 62; i++){
		bool found = false;
		for(int j = k; j < m; j++)if(c[j] & (1LL << i)){
			found = true;
			swap(c[j], c[k]);
			break;
		}
		
		if(found){
			for(int j = k + 1; j < m; j++)if(c[j] & (1LL << i)){
				c[j] ^= c[k];
			}
			d[k] = 1LL << i;
			k++;
		}
	}
	
	for(int i = 0; i < k; i++)if(x & d[i]){
		x ^= c[i];
	}
	
	return (x == 0);
}

int main(){
	scanf("%d", &t);
	while(t--){
		scanf("%d", &n);
		for(int i = 0; i < n; i++)
			scanf("%lld", &a[i]);
		scanf("%s", s);
		
		m = 0;
		bool ok = true;
		
		for(int i = n - 1; i >= 0; i--){
			if(s[i] == '0'){
				b[m++] = a[i];
			}else{
				if(!check(a[i])){
					ok = false;
					break;
				}
			}
		}
		
		if(ok)printf("0\n");
		else printf("1\n");
	}

	return 0;
}
