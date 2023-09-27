#include <bits/stdc++.h>
using namespace std;

int n,a,b,c,x,cnt;
int num[105]={0};
bool ch [10005]={0};

int main(){
  int i,j;
  while(1){
    cin >> n >> a >> b >> c >> x;
    if(n+a+b+c+x==0)break;
    cnt=0;
    for(i=1;i<=10000;i++){
      ch[i]=0;
    }
    for(i=0;i<n;i++){
      cin >> num[i];
    }
    for(i=0;i<=10000;i++){
      if(x==num[cnt])cnt++;
      if(cnt==n){
	cout << i << endl;
	break;
      }
      x = (a*x+b)%c;
    }
    if(cnt!=n)cout << -1 << endl;
  }
  return 0;
}

