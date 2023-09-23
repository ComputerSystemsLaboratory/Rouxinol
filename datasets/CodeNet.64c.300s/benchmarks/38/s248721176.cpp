#include<cstdio>

int a[10];

bool is_ok(int n){
  int right = 0;
  int left = 0;
  for(int i=0;i<10;i++){
    if(n%2==1&&right<a[i]) right = a[i];
    else if(n%2==0&&left<a[i]) left = a[i];
    else return false;
    n/=2;
  }
  return true;
}

void solve(){
  for(int i=0;i<10;i++) scanf("%d",a+i);
  for(int i=0;i<1024;i++){
    if(is_ok(i)){
      printf("YES\n");
      return;
    }
  }
  printf("NO\n");
}


int main(){
  int n;
  scanf("%d",&n);
  for(int i=0;i<n;i++) solve();
  return 0;
}