#include<iostream>
#include<string>
using namespace std;
int main(){
  string str[9];
  str[0] = ".,!? ";
  str[1] = "abc";
  str[2] = "def";
  str[3] = "ghi";
  str[4] = "jkl";
  str[5] = "mno";
  str[6] = "pqrs";
  str[7] = "tuv";
  str[8] = "wxyz";

  string a;
  int h,t = 0;
  cin >> h;
  while (t < h) {
    cin >> a;
    int i = 0;
    do {
      int n = 0,m = 0;
      while (a[i] != '0') {
        m = a[i] - '0';
        n++;
        i++;
      }
      int j;
      if (m == 7 || m == 9) {
        j = n%4 - 1;
        if (j == -1) {
          j = 3;
        }
        cout << str[m-1][j];
      }
      else if (m == 1) {
        j = n%5 - 1;
        if(j == -1){
          j = 4;
        }
        cout << str[m-1][j];
      }
      else if (m == 0) {

      }
      else{
        j = n%3 - 1;
        if (j == -1) {
          j = 2;
        }
        cout << str[m-1][j];
      }
      if (a[i+1]) {
        i++;
      }
    }while(a[i+1]);
    cout << endl;
    t++;
  }
}