#include <cstdio>
using namespace std;

int main()
{
while(true) {
int n;
scanf("%d", &n);
if(n == 0)
break;
int change = 1000 - n;
int ans = 0;
for(int digit = 1; digit < 1000; digit *= 10) {
int cur = change / digit % 10;
ans += (cur / 5) + (cur % 5);
}
printf("%d\n", ans);
}
return 0;
}