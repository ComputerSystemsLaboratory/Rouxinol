#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){

  int sum = 0, x, total, ans;
  vector<int> p1(0);
  vector<int> p2(0);
  int n;
  
    while(1){
      cin >> n;
      if(n==0)
      break;
      for(int i=0; i<n; i++){
        cin >> x;
        p1.push_back(x);
      }

      int max = *max_element(p1.begin(), p1.end());
      int min = *min_element(p1.begin(), p1.end());

      for(int i=0; i<n; i++){
        sum += p1[i];
      }
      total = sum - min - max;
      ans = total / (n-2);
      cout << ans << endl;
      p1 = p2;
      sum = 0;
      total = 0;
      ans = 0;
    }

  return 0;
}