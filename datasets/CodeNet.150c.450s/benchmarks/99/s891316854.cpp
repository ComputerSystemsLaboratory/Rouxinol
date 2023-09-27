#include <iostream>
using namespace std;
int decode(string s)
{
  int sum = 0, num = 1;
  for(int i=0; i<s.length(); i++){
    char c = s[i];
    switch(c){
    case 'm':
      sum += 1000 * num;
      num = 1;
      break;
    case 'c':
      sum += 100 * num;
      num = 1;
      break;
    case 'x':
      sum += 10 * num;
      num = 1;
      break;
    case 'i':
      sum += num;
      num = 1;
      break;
    default:
      num = c - '0';
    }
  }
  return sum;
}
int main()
{
  int n;
  cin >> n;
  for(int i=0; i<n; i++){
    string s1,s2;
    cin >> s1 >> s2;
    int sum = decode(s1)+decode(s2);
    for(int div = 1000; div > 0; div /= 10){
      int num = sum / div;
      sum %= div;
      if(num == 0) continue;
      if(num >= 2 && num <= 9){
        cout << num;
      }
      switch(div){
      case 1000: cout << "m"; break;
      case 100: cout << "c"; break;
      case 10: cout << "x"; break;
      case 1: cout << "i"; break;
      }
    }
    cout << endl;
  }
  return 0;
}