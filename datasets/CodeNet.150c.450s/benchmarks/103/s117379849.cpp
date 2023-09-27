#include <iostream>
using namespace std;


int main()
{
  int n, s;
  int i, j, tmp;
  int sum, count;
  int ans;

  while(cin>>n){
    cin>>s;
    if(n+s==0) break;

    ans=0;
    for(i=0; i<1024; i++){
      tmp=i; sum=0; count=0;
      for(j=0; j<10; j++){
        if(tmp%2==1){
          sum+=j;
          count++;
        }
        tmp/=2;
      }
      if(count==n && sum==s) ans++;
    }
    printf("%d\n", ans);
  }

  return 0;
}