#include <iostream>
#include <numeric>
#include <vector>
using namespace std;

int main(){
  int n,m;

  while(cin>>n>>m&&n!=0&&m!=0){
    vector<int> taro, hanako;
    taro = vector<int>(n);
    hanako = vector<int>(m);
    for(int i=0;i<n;i++) cin >> taro[i];
    for(int i=0;i<m;i++) cin >> hanako[i];

    int taro_score, hana_score;
    taro_score = accumulate(taro.begin(), taro.end(), 0);
    hana_score = accumulate(hanako.begin(), hanako.end(), 0);

    int sum = 201;
    int ans1,ans2;
    int flag=0;
    for(int i=0;i<n;i++){
      for(int j=0;j<m;j++){
        if(taro_score-taro[i]+hanako[j] == hana_score-hanako[j]+taro[i]){
          if(sum>taro[i]+hanako[j]){
            ans1 = taro[i];
            ans2 = hanako[j];
            sum = taro[i]+hanako[j];
            flag=1;
          }
        }
      }
    }
    if(flag==0) cout << -1 <<  endl;
    else cout << ans1 << " " << ans2 <<  endl;
  }
  return 0;
}