#include <iostream>
#include <string>

using namespace std;

int main(int argc, char *argv[]) {
  int n;
  string tenkey[10] = {".,!? ",
                     "abc",
                     "def",
                     "ghi",
                     "jkl",
                     "mno",
                     "pqrs",
                     "tuv",
                     "wxyz"};
  cin >> n;

  for (int i = 0; i < n; i++) {
    string s;
    cin >> s;

    for (int j = 0; j < s.size(); j++) {
      int count = -1;
      int num = s[j] - '0';
      while (s[j] != '0') {
        count++;
        j++;
      }
      //cout << "num-1 = " << num-1 << endl;                                                                                                      
      //cout << "count = " << count << endl;                                                                                                      
      if (count >= 0) {
        //cout << "tenkey[num-1].size() = " << tenkey[num-1].size() << endl;                                                                      
        cout << tenkey[num-1][count % tenkey[num-1].size()];
      }
    }
    cout << endl;
  }
  return 0;
}