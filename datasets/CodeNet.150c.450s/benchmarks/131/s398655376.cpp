#include <cstdio>
#include <algorithm>
#include <cstdlib>
#include <string>

using namespace std;

string itoa(int a,int n){
  char s[22],f[22];
  sprintf(f,"%%0%dd",n);
  sprintf(s,f,a);
  return string(s);
}

int v[1000000];
int main(void)
{
  int a,l,res;
  for(;;) {
    scanf("%d%d",&a,&l); if(a+l==0)break;
    fill(v,v+1000000,-1);
    res = 0;
    while(v[a] < 0) {
      v[a] = res++;
      string p = itoa(a,l), q = itoa(a,l);
      sort(p.begin(),p.end());
      sort(q.rbegin(),q.rend());
      a = atoi(q.c_str())-atoi(p.c_str());
    }
    printf("%d %d %d\n",v[a],a,res-v[a]);
  }
  return 0;
}