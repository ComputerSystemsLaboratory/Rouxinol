#include <bits/stdc++.h>
using namespace std;

int INF = 1 << 20;
int main(){
  int n;
  while(1){
    cin >> n;
    if(n == 0) break;
    vector<int> student;
    for(int i = 0; i < n; i++){
      int tmp;
      cin >> tmp;
      student.push_back(tmp);
    }

    int ans = INF;
    for(int i = 0; i < n - 1; i++){
      for(int j = i + 1; j < n; j++){
        int sub = abs(student[i] - student[j]);
        if(sub < ans) ans = sub;
      }
    }
    cout << ans << endl;
  }
}