#include <iostream>
#include <string>
using namespace std;

int main(){
  int n;
  cin >> n;
  cin.ignore();

  string rule[10] = {"", ".,!? ", "abc", "def", "ghi",
                     "jkl","mno", "pqrs", "tuv", "wxyz"};
  
  for(int i=0; i<n; i++){
    string s;
    getline(cin, s);

    string ans = "", temp = "";
    int before = 0, index = 0;
    for(int j=0; j<s.size(); j++){
      if(s[j] - '0' == 0){
        ans += temp;
        temp = "";
        index = 0;
      }else if(before == s[j] - '0'){
        temp = rule[before][index];
        index = (index+1)%rule[before].size();
      }else{
        temp = rule[s[j] - '0'][0];
        index = 1;
      }
      before = s[j] - '0';
    }

    cout << ans << endl;
  }
  
  return 0;
}