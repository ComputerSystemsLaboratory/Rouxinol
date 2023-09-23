#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
  int n,sum = 0,ans,sumkeep;
  
  while(cin >> n){
    if(n == 0)break;
    
    ans = 0;
    sumkeep = 0;

    int a[n];
    
    for(int i = 0;i < n;i++){
      cin >> a[i];
    }
    
    for(int i = 0;i < n;i++){
      sumkeep = 0;
      for(int j = i;j < n;j++){
	sumkeep += a[j];
	if(i == 0 && j == 0){
	  ans = sumkeep;
	}
	else if(ans < sumkeep){
	  ans = sumkeep;
	}
      }
    }
    cout << ans << endl;
  }
}
	