#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
  int n;
  long long m;
  long long c=0;  
  while(1){
    c=0;
    cin >> n >> m;
    if(n==0&&m==0)break;
    pair<int,int> a[10000];
    for(int i=0;i<n;i++){
      cin >> a[i].second>>a[i].first;
      c+=a[i].first*a[i].second;
    }
    sort(a,a+n);
    for(int i=n-1;i>=0;i--){
      if(m>a[i].second){
	m-=a[i].second;
	c-=a[i].second*a[i].first;
      }
      else{
	c-=a[i].first*m;
	break;
      }
    }
    cout << c << endl;
  }
  return 0;
}