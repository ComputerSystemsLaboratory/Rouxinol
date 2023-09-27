#include <iostream>
#define k 10000

using namespace std;

void CountingSort(int a[],int b[],int n){
  int cnt[k+1];
  for(int i=0;i<=k;i++) cnt[i]=0;
  for(int i=1;i<=n;i++) cnt[a[i]]++;
  for(int i=1;i<=k;i++) cnt[i]=cnt[i]+cnt[i-1];
  for(int j=1;j<=n;j++){
    b[cnt[a[j]]]=a[j];
    cnt[a[j]]--;
  }
}

int main(){
  int n;
  cin >> n;
  int a[n+1],b[n+1];
  for(int i=1;i<=n;i++) cin >> a[i];
  CountingSort(a,b,n);
  for(int i=1;i<=n;i++){
    if(i==1) cout << b[1];
    else cout << " " << b[i];
  }
  cout << endl;
}