#include<iostream>
#include<vector>
using namespace std;
typedef long long ll;
int prime(int x) {
	if (x < 2)return 0;
	else if (x == 2) return 1;
	if (x % 2 == 0) return 0;
	for (int i = 3; i*i <= x; i += 2) {
		if (x%i == 0) return 0;
	}
	return 1;
}
int main() {
	int a, d, n;
	while (scanf("%d %d %d",&a,&d,&n),a,d,n) {
		vector<int>v;
		for (int i = a; i <= 1000000; i+=d) {
			if (prime(i)) v.push_back(i);
		}
		 printf("%d\n",v[n-1]);
	}
}

