#include <iostream>
#include <string>
#include <vector>

using namespace std;

string button[9] = {".,!? ", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};

int main(void){
  int n;
  string s;

  cin >> n;
  for(int i=0; i<n; i++){
    vector<char> v;
    cin >> s;

    int count = 0;
    for(int j=0; j<s.size(); j++){
      if(s[j] == '0'){
        if(j == 0 || s[j-1] == '0')
          continue;

        v.push_back(button[(s[j-1]-'0')-1][(count-1)%button[(s[j-1]-'0')-1].size()]);
        count = 0;
      } else {
        count++;
      }
    }

    for(int j=0; j<v.size(); j++){
      cout << v[j];
    }
    cout << endl;
  }

  return 0;
}