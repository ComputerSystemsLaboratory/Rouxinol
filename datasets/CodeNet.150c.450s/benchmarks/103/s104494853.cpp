#include <iostream>

using namespace std;

const int num[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
int ans = 0, n, s, sum = 0;

void subsetsum(int n, int k)
{
  for(int i = n; i < 10; i++){
    if(k){
      sum += num[i];
      subsetsum(i + 1, k - 1);
      if(sum == s && k == 1)
	ans++; 
      sum -= num[i];
    }else{
      break;
    }
  }
}
	

int main()
{
  while(1){
    cin >> n >> s;
    if(n == 0 && s == 0){
      break;
    }else{
      subsetsum(0, n);
      cout << ans << endl;
      ans = 0;
    }
  }
}