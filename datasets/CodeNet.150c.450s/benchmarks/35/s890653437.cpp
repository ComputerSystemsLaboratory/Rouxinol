#include <iostream>

using namespace std;

int main()
{
  while(1){
    int n;
    int a[5000];
    cin >> n;
    if(n == 0)
      break;
    else{
      for(int i = 0; i < n; i++)
	cin >> a[i];
      int ans = a[0], num;
      for(int i = 0; i < n; i++){
	num = 0;
	for(int j = i; j < n; j++){
	  num += a[j];
	  ans = (num > ans) ? num : ans;
	}
      }
      cout << ans << endl;
    }
  }
}