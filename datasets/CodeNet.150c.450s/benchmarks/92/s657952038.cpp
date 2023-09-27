#include <iostream>
using namespace std;

int main()
{
  int a,b,ans;
  int d[10]={0,1,10,100,1000,10000,100000,1000000,10000000,100000000};
  int e[10]={0,0,1,2,3,4,5,6,7,8};
  
  while(cin >> a >> b){
    int sum=a+b;
    for(int i=1;i<10;i++){
      if(d[i-1]<=sum && sum<d[i]){
	ans=e[i];
      }
    }
    cout << ans << endl;
  }
  
  return 0;
}