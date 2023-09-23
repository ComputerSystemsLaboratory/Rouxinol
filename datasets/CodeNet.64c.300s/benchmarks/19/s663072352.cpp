#include<iostream>
#include<algorithm>
using namespace std;

int main(){
  int n;
  int a[5000];
  int tmp;
  int ans;

  while(1){
    cin >> n;
    if(!n)break;

    for(int i=0;i<n;i++){
      cin >> a[i];
    }

    ans = a[0];
    for(int i=0;i<n;i++){
      for(int j=i;j<n;j++){
	if(i==j)tmp = a[i];
	else tmp += a[j];
	ans = max(tmp,ans);
      }
    }

    cout << ans << endl;
  }
}