#include <iostream>
#include <string>
using namespace std;

int n;
string s1,s2;
int s1_cnt = 0, s2_cnt = 0;

int main(){
  cin >> n;
  for(int i = 0; i < n; i++){
    cin >> s1 >> s2;
    if(s1 > s2){
      s1_cnt += 3;
    }else if(s1 < s2){
      s2_cnt += 3;
    }else{
      s1_cnt++;
      s2_cnt++;
    }

  }
  cout << s1_cnt << " " << s2_cnt << endl;
}