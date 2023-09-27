# include <iostream>
# include <algorithm>
# define lowbit(x) (x&(-x))
using namespace std;
typedef long long ll;
int *tree,n;
void add(int x)
{
	while(x <= n)
	{
		tree[x]++;
		x += lowbit(x);
	}
}
ll sum(int x)
{
	ll result = 0;
	while(x > 0) 
	{
		result += tree[x];
		x -= lowbit(x);
	}
	return result;
}
int main(void)
{
	int *a,*b;
	ll ans = 0;
	scanf("%d",&n); a = new int [n];
	for(int i = 0;i < n;i++) scanf("%d",&a[i]); 
	tree = new int [n+1]; b = new int [n];
	for(int i = 0;i < n;i++) tree[i] = 0,b[i] = a[i];
	sort(b,b+n);
	for(int i = 0;i < n;i++) a[i] = lower_bound(b,b+n,a[i])-b+1;
	for(int i = n-1;i >= 0;i--)
	{
		ans += sum(a[i]);
		add(a[i]);
	}
	printf("%lld\n",ans);
	return 0;
}
