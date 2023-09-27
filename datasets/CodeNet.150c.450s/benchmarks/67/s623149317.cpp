#include <bits/stdc++.h>
using namespace std;
vector <char> v;
vector<int>ansl;
string s;

int main(){
  int N;

  cin >>N;

  while (N != 0)  {
    int ans = 0;

    for(int j = N-1;j>0;j--){
      int ruiseki = 0;

      for(int k = 1;k<=j;k++){
        ruiseki += k;
      }
      for(int k = 1;k<=j;k++){
        if(ruiseki == N){
          ans++;
        }
        ruiseki -= k;
      }
    }
    ansl.push_back(ans);
    cin >>N;
  }


  for (int i = 0;i<(int)ansl.size();i++){
    cout <<ansl[i]<<endl;
  }

  return 0;
}

