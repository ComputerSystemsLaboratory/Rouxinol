#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
while(true) {
int n, m;
scanf("%d%d", &n, &m);
if(n == 0)
break;
vector<int> h(n + 1), w(m + 1);
for(int i = 1; i <= n; ++i) {
scanf("%d", &h[i]);
h[i] += h[i - 1];
}
for(int i = 1; i <= m; ++i) {
scanf("%d", &w[i]);
w[i] += w[i - 1];
}
vector<int> x, y;
x.reserve(n * n / 2);
y.reserve(m * m / 2);
for(int i = 0; i < n; ++i) {
for(int j = i + 1; j < n + 1; ++j)
x.push_back(h[j] - h[i]);
}
for(int i = 0; i < m; ++i) {
for(int j = i + 1; j < m + 1; ++j)
y.push_back(w[j] - w[i]);
}
sort(x.begin(), x.end());
sort(y.begin(), y.end());
int ans = 0;
for(int i = 0; i < x.size(); ++i) {
int v = x[i];
int c = upper_bound(y.begin(), y.end(), v) - lower_bound(y.begin(), y.end(), v);
ans += c;
}
printf("%d\n", ans);
}
return 0;
}