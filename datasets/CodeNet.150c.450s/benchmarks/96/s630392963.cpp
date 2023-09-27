#include <bits/stdc++.h>
using namespace std;

#define PI 4*atan(1)
#define INF 1e8

int dx[4] = {1,0,-1,0};
int dy[4] = {0,1,0,-1};

vector<string> button = {".,!?@",
           "abc",
           "def",
           "ghi",
           "jkl",
           "mno",
           "pqrs",
           "tuv",
           "wxyz"};


int main(){
  int n;
  cin >> n;
  for(int i = 0; i < n; i++){
    string s;
    cin >> s;
    int cnt = 0;
    for(int j = 0; j < s.size(); j++){
      if(s[j] == '0'){
        if(cnt != 0){
          char c;
          int num = s[j-1] - '0';
          // cout << "num: " << num - 1 << " " << (cnt-1)%button[num-1].size() << endl;
          if(num - 1 == 0 && (cnt-1)%button[num-1].size() == 4)c = ' ';
          else c = button[num - 1][(cnt-1)%button[num-1].size()];
          cout << c;
          cnt = 0;
        }
      }else{
        cnt++;
      }
    }
    cout << endl;
  }
}