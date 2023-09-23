#include<cstdio>
using namespace std;
 
int main() {
int bottom, benefit, N, rt;
 
scanf("%d", &N);

scanf("%d", &rt);
bottom = rt; 
scanf("%d", &rt);
benefit = rt - bottom;
if(rt < bottom) bottom = rt;
 
for(int i=2; i<N; ++i) {
scanf("%d", &rt);
if(benefit < rt - bottom) benefit = rt - bottom;
if(rt < bottom) bottom = rt;
}
 
printf("%d\n", benefit);
 
return 0;
}