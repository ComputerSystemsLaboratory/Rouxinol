#include <cstdio>
#include <algorithm>
using namespace std;

int main()
{
while(true) {
int r, c;
int fld[10000] = {0};
scanf("%d%d", &r, &c);
if(r == 0)
break;
for(int i = 0; i < r; ++i) {
for(int j = 0; j < c; ++j) {
int t;
scanf("%d", &t);
fld[j] |= t << i;
}
}
int ans = 0;
for(int bit = 0; bit < (1 << r); ++bit) {
int sum = 0;
for(int i = 0; i < c; ++i) {
int f = fld[i] ^ bit;
int x = 0;
for(int j = 0; j < r; ++j)
x += (f >> j) & 1;
sum += max(x, r - x);
}
ans = max(ans, sum);
}
printf("%d\n", ans);
}
return 0;
}