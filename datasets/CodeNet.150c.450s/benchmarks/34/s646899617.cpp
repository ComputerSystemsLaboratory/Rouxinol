#include<iostream>
#include<vector>
#define loop(i,a,b) for(int i=a;i<b;i++)
using namespace std;

void solve(){
 int n;
  long long a[30] = {1,2,4};
  loop(i,3,30)a[i] = a[i-1] + a[i-2] + a[i-3];
  while(cin>>n,n)
    cout<<1+a[n-1]/3650<<endl;
}
int main(void){
  solve();
  return 0;
}