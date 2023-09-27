#include<cstdio>
#include<map>
#include<algorithm>
using namespace std;

struct BIT{
	int bit[200001];
	int size;
	BIT(int n){
		size = n;
		for(int i=0;i<=n;i++) bit[i] = 0;
	}
	void add(int i,int x){
		i++;
		while(i<=size){
			bit[i] += x;
			i += i & -i;
		}
	}
	int sum(int i){
		int ret = 0;
		i++;
		while(i>0){
			ret += bit[i];
			i -= i & -i;
		}
		return ret;
	}
};

int main(){
	int n,a[200000],b[200000],p[200000];
	long long ans = 0;
	map<int,int> mp;
	scanf("%d",&n);
	BIT bit(n);
	for(int i=0;i<n;i++){
		scanf("%d",a+i);
		b[i] = a[i];
	}
	sort(b,b+n);
	for(int i=0;i<n;i++) mp[b[i]] = i;
	for(int i=0;i<n;i++) p[mp[a[i]]] = i;
	for(int i=n-1;i>=0;i--){
		ans += bit.sum(p[i]);
		bit.add(p[i],1);
	}
	printf("%lld\n",ans);
}