#include<bits/stdc++.h>

using namespace std;

int main()
{
  while(1){
    int N,M;
    double P;
    cin>>N;
    cin>>M;
    cin>>P;
    if(N == 0 && M == 0 && P == 0){
      break;
    }

    int sum = 0;
    vector<int> n;
    for(int i = 0;i < N;++i){
      int j = 0;
      cin>>j;
      n.push_back(j);
      sum += 100 * j;
    }

    int getter = n.at(M-1);
    sum = sum * (100-P) / 100;

    int ans;
    if(getter != 0){
      ans = sum / getter;
    }
    else{
      ans = 0;
    }
  
    cout<<ans<<endl;
  }

  return 0;
}
