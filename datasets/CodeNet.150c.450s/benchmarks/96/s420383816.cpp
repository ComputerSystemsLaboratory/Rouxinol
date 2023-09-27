#include <iostream>
#include <cmath>
#include <algorithm>
#include <map>
#include <string>
#include <vector>
#define FOR(i, a, b)  for(int i=a; i<b; ++i)
#define rFOR(i, a, b) for(int i=a-1; i>=b; --i)
#define REP(i, n) for(int i=0; i<n; ++i)
#define rREP(i, n) for(int i=n-1; i>=0; --i)
#define all(a)  a.begin(), a.end()
#define MAXNUM 1024
using namespace std;
typedef long long ll;

int main(){
  int n; cin >> n;
  string dict[10] = {
    {""},
    {".,!? "},
    {"abc"},
    {"def"},
    {"ghi"},
    {"jkl"},
    {"mno"},
    {"pqrs"},
    {"tuv"},
    {"wxyz"},
  };

  REP(i, n){
    string input;  cin >> input;
    int num = 0, cnt=-1;
    REP(j, input.length()){
      if(input[j] != '0'){
        if(num==0)  num = input[j] - '0';
        cnt++;
        continue;
      }else{
        if(num!=0){
          cnt %= dict[num].length();
          cout << dict[num][cnt];
          cnt = -1;
          num = 0;
        }
      }
    }
    cout << endl;
  }
  return 0;
}

