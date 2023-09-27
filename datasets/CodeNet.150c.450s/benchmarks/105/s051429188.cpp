#include<bits/stdc++.h>
using namespace std;

typedef long long LL;

const int N=200,C=62;

int n;
char s[N+9];
LL a[N+9];
int id[C+9];

bool Insert(int x){
  for (int i=C-1;i>=0;--i)
	if (a[x]>>i&1){
	  if (!id[i]) {id[i]=x;return 1;}
	  a[x]^=a[id[i]];
	}
  return 0;
}

void work(){
  scanf("%d",&n);
  for (int i=1;i<=n;++i)
	scanf("%lld",&a[i]);
  scanf("%s",s+1);
  for (int i=0;i<C;++i) id[i]=0;
  for (int i=n;i>=1;--i)
    if (Insert(i)&&s[i]-'0') {puts("1");return;}
  puts("0");
}

int main(){
  int T;
  scanf("%d",&T);
  for (;T--;) work();
  return 0;
}