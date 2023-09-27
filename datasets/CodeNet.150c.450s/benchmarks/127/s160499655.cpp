// Organize Your Train part II

#include <iostream>
#include <utility>
#include <string>
#include <algorithm>
#include <string>
#include <map>
using namespace std;

string word;
int answer;

void solve() {
  map<string,int> table;
  string temp[5],str[9];
  answer = 0;
  int length = word.length();
  for (int i=0; i<length; i++){
    // abcd -> temp1 + temp2
    // temp3 : temp1????????¢
    // temp4 : temp2????????¢
    temp[1] = word.substr(i);
    temp[2] = word.substr(0,i);
    temp[3] = temp[1];
    reverse(temp[3].begin(), temp[3].end());
    temp[4] = temp[2];
    reverse(temp[4].begin(), temp[4].end());
    
    str[1] = temp[1] + temp[2];
    str[2] = temp[1] + temp[4];
    str[3] = temp[2] + temp[1];
    str[4] = temp[2] + temp[3];
    str[5] = temp[3] + temp[2];
    str[6] = temp[3] + temp[4];
    str[7] = temp[4] + temp[1];
    str[8] = temp[4] + temp[3];

    for (int i=1; i<=8;i++) {
      if (table[str[i]] == 0) {
        answer++;
        table[str[i]]++;
      }
    }
  }
  cout << answer << endl;
}

int main(){
  int N;
  cin >> N;
  for (int i=0; i<N; i++) {
    cin >> word;
    solve();
  }
  return 0;
}