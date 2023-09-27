#include <cstdio>
#include <algorithm>
using namespace std;

int main()
{
bool submit[30] = {false};
for(int i = 0; i < 28; ++i) {
int t;
scanf("%d", &t);
submit[t - 1] = true;
}
for(int i = 0; i < 30; ++i) {
if(!submit[i])
printf("%d\n", i + 1);
}
return 0;
}