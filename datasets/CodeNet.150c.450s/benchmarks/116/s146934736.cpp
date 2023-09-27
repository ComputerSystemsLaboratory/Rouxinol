#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;


int main()
{
while(true) {
int n, k;
vector<int> x;
scanf("%d%d", &n, &k);
if(n == 0)
break;
x.resize(n);
for(int i = 0; i < n; ++i)
scanf("%d", &x[i]);
int cur = 0, ans;
for(int i = 0; i < k; ++i)
cur += x[i];
ans = cur;
for(int i = k; i < n; ++i) {
cur += x[i];
cur -= x[i - k];
ans = max(ans, cur);
}
printf("%d\n", ans);
}
return 0;
}