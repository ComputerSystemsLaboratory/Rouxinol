#include<bits/stdc++.h>

#define REP(i,s,n) for(int i=s;i<n;++i)
#define rep(i,n) REP(i,0,n)

using namespace std;

#define MAX (23*60*60+59*60+59+1)
int arr[MAX];

int main() {
  int n;
  while( cin >> n, n ) {
    memset(arr,0,sizeof arr);
    int h,m,s;
    rep(i,n) {
      scanf("%d:%d:%d",&h,&m,&s);
      arr[h*60*60+m*60+s] += 1;
      scanf("%d:%d:%d",&h,&m,&s);
      arr[h*60*60+m*60+s] += -1;
    }
    int maxi = arr[0];
    REP(i,1,MAX) {
      arr[i] += arr[i-1];
      maxi = max(maxi,arr[i]);
    }
    cout << maxi << endl;
  }
  return 0;
}

