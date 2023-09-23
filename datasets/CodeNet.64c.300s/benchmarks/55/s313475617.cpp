#include <iostream>
#include <cstring>
#define REP(i,n) for(int i = 0;i < n ;i++)
#define FOR(i,m,n) for(int i= m ;i<n;i++)
using namespace std;

int main(void){
  int i=0;
  int k[10001]={0};
  int count=0;
int o=1;
  for(i=0;o!=0;i++){
    cin >> k[i];
    o=k[i];
    count++;
  }

  for(i=0;i<count-1;i++){
cout << "Case " << i+1 << ':' << ' ' << k[i] << endl;
  }

  return 0;
}