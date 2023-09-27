#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main(void){

  int n;
  while(cin >> n, n){
    vector<string> a(n);
    int cnt=0;
    
    for(int i=0;i<n;i++)cin >> a[i];
    for(int i=0;i+1<n;i++)
      cnt += a[i][1]==a[i+1][1];
    cout << cnt << endl;
  }
  
  return 0;
}