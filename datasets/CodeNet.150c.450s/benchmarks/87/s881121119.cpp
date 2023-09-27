#include <bits/stdc++.h>
#include <vector>
using namespace std;
int main(){
  int n;
  vector<int> ans;
  while(cin >> n,n){
    vector<int> c1(n,0),c2(n,0),c3(n,0),c4(n,0),c5(n,0);
    int point = 0;
    for(int i = n - 1;i >= 0;i--)cin >> c1[i] >> c2[i] >> c3[i] >> c4[i] >> c5[i];
    bool flag = 1;
    while(flag){
      flag = 0;
      for(int i = n - 1;i >= 0;i--){
        if((c1[i]||c2[i]||c3[i]||c4[i]||c5[i]) && c3[i] != 0){
          if(c1[i] == c2[i] && c1[i] == c3[i] && c1[i] == c4[i] && c1[i] == c5[i]){
            point += 5*c3[i];
            c1.erase(c1.begin()+i);
            c1.push_back(0);
            c2.erase(c2.begin()+i);
            c2.push_back(0);
            c3.erase(c3.begin()+i);
            c3.push_back(0);
            c4.erase(c4.begin()+i);
            c4.push_back(0);
            c5.erase(c5.begin()+i);
            c5.push_back(0);
            flag = 1;
          }
          else if(c1[i] == c2[i] && c1[i] == c3[i] && c1[i] == c4[i]){
            point += 4*c3[i];
            c1.erase(c1.begin()+i);
            c1.push_back(0);
            c2.erase(c2.begin()+i);
            c2.push_back(0);
            c3.erase(c3.begin()+i);
            c3.push_back(0);
            c4.erase(c4.begin()+i);
            c4.push_back(0);
            flag = 1;
          }
          else if(c2[i] == c3[i] && c2[i] == c4[i] && c2[i] == c5[i]){
            point += 4*c3[i];
            c2.erase(c2.begin()+i);
            c2.push_back(0);
            c3.erase(c3.begin()+i);
            c3.push_back(0);
            c4.erase(c4.begin()+i);
            c4.push_back(0);
            c5.erase(c5.begin()+i);
            c5.push_back(0);
            flag = 1;
          }
          else if(c1[i] == c2[i] && c1[i] == c3[i]){
            point += 3*c3[i];
            c1.erase(c1.begin()+i);
            c1.push_back(0);
            c2.erase(c2.begin()+i);
            c2.push_back(0);
            c3.erase(c3.begin()+i);
            c3.push_back(0);
            flag = 1;
          }
          else if(c2[i] == c3[i] && c2[i] == c4[i]){
            point += 3*c3[i];
            c2.erase(c2.begin()+i);
            c2.push_back(0);
            c3.erase(c3.begin()+i);
            c3.push_back(0);
            c4.erase(c4.begin()+i);
            c4.push_back(0);
            flag = 1;
          }
          else if(c3[i] == c4[i] && c3[i] == c5[i]){
            point += 3*c3[i];
            c3.erase(c3.begin()+i);
            c3.push_back(0);
            c4.erase(c4.begin()+i);
            c4.push_back(0);
            c5.erase(c5.begin()+i);
            c5.push_back(0);
            flag = 1;
          }
        }
      }
    }
    ans.push_back(point);
  }
  for(int i = 0;i < ans.size();i++)cout << ans[i] << endl;
}

