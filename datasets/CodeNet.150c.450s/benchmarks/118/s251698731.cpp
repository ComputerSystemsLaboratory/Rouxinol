#include<iostream>
#include<vector>

using namespace std;

int main(){
  int n, Y, M, D;
  cin >> n;
  vector<int> ans;
  vector<int> mon = {1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0};
  for(int i = 0; i < n; i++){
    int A = 0;
    cin >> Y >> M >> D;
    for(int j = 999; j >= Y; j--){
      for(int k = 9; k >= 0; k--){
        if(j == Y && k <= M-1) continue;
        if((j)%3 == 0){
          A += 20;
        }
        else{
          A += 19+mon[k];
        }
      }
    }
    Y%3!=0?A += 19-D+mon[M-1]+1:A += 20-D+1;
    ans.push_back(A);
  }
  for(int i = 0; i < n; i++) cout << ans[i] << endl;
}

