#include <cstdio>
using namespace std;
bool s[31];
int a;
int main()
{
for(int i=0;i<28;i++){
scanf("%d",&a); s[a]=1;
}
for(int i=1;i<=30;i++) if(!s[i]) printf("%d\n",i);
}