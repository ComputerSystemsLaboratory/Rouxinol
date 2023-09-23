#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);

using namespace std;
double f[23];
int main() { _
int n,i;
f[0]=1.;
for(i=1;i<23;++i)f[i]=f[i-1]*(double)i;
while(~scanf("%d",&n))printf("%.0lf\n",f[n]);
    return 0;
}